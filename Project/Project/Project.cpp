#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string toLower(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), tolower);
    return lowerStr;
}

string removePunctuation(const string& str) {
    string result;
    copy_if(str.begin(), str.end(), back_inserter(result), [](char c) {
        return !ispunct(c);
        });
    return result;
}

int main() {

    setlocale(LC_ALL, "russian");

    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cout << "Не удалось открыть файл input.txt" << endl;
        return 1;
    }

    map<string, int> wordFrequency;
    string word;

    while (inputFile >> word) {
        word = removePunctuation(word);
        word = toLower(word);
        if (!word.empty()) {
            wordFrequency[word]++;
        }
    }

    inputFile.close();

    cout << "Частотный словарь:" << endl;
    for (const auto& pair : wordFrequency) {
        cout << pair.first << ": " << pair.second << endl;
    }

    auto mostFrequent = max_element(wordFrequency.begin(), wordFrequency.end(),
        [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second < b.second;
        });

    if (mostFrequent != wordFrequency.end()) {
        cout << "Наиболее часто встречающееся слово: " << mostFrequent->first
            << " (встречается " << mostFrequent->second << " раз)" << endl;
    }

    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cout << "Не удалось открыть файл output.txt" << endl;
        return 1;
    }

    for (const auto& pair : wordFrequency) {
        outputFile << pair.first << ": " << pair.second << endl;
    }

    outputFile.close();

    return 0;
}