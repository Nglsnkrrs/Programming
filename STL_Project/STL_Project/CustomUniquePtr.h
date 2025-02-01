#pragma once
template <typename T>
class CustomUniquePtr {
private:
    T* ptr;

public:
    explicit CustomUniquePtr(T* p = nullptr) : ptr(p) {}

    CustomUniquePtr(const CustomUniquePtr&) = delete;
    CustomUniquePtr& operator=(const CustomUniquePtr&) = delete;

    CustomUniquePtr(CustomUniquePtr&& other) noexcept : ptr(other.ptr) {
        other.ptr = nullptr;
    }

    CustomUniquePtr& operator=(CustomUniquePtr&& other) noexcept {
        if (this != &other) {
            delete ptr;
            ptr = other.ptr;
            other.ptr = nullptr;
        }
        return *this;
    }

    ~CustomUniquePtr() {
        delete ptr;
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

    T* release() {
        T* temp = ptr;
        ptr = nullptr;
        return temp;
    }

    void reset(T* p = nullptr) {
        delete ptr;
        ptr = p;
    }
};