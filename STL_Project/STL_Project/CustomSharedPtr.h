#pragma once

template <typename T>
class CustomSharedPtr {
private:
    T* ptr;
    size_t* refCount;

    void release() {
        if (refCount) {
            (*refCount)--;
            if (*refCount == 0) {
                delete ptr;
                delete refCount;
            }
        }
    }

public:
    explicit CustomSharedPtr(T* p = nullptr) : ptr(p), refCount(new size_t(1)) {}

    CustomSharedPtr(const CustomSharedPtr& other) : ptr(other.ptr), refCount(other.refCount) {
        (*refCount)++;
    }

    CustomSharedPtr& operator=(const CustomSharedPtr& other) {
        if (this != &other) {
            release();
            ptr = other.ptr;
            refCount = other.refCount;
            (*refCount)++;
        }
        return *this;
    }

    CustomSharedPtr(CustomSharedPtr&& other) noexcept : ptr(other.ptr), refCount(other.refCount) {
        other.ptr = nullptr;
        other.refCount = nullptr;
    }

    CustomSharedPtr& operator=(CustomSharedPtr&& other) noexcept {
        if (this != &other) {
            release();
            ptr = other.ptr;
            refCount = other.refCount;
            other.ptr = nullptr;
            other.refCount = nullptr;
        }
        return *this;
    }

    ~CustomSharedPtr() {
        release();
    }

    T& operator*() const {
        return *ptr;
    }

    T* operator->() const {
        return ptr;
    }

    T* get() const {
        return ptr;
    }

    size_t use_count() const {
        return refCount ? *refCount : 0;
    }

    void reset(T* p = nullptr) {
        release();  
        ptr = p;
        refCount = (p ? new size_t(1) : nullptr);
    }
};

