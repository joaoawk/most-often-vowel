#include <iostream>
#include <map>
#include <string>

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

std::map<char, int> getMappedVowels(std::string word) {
    std::map<char, int> mappedVowels;
    for (char c : word) {
        if (isVowel(c)) {
            mappedVowels[c]++; 
        }
    }
    return mappedVowels;
}

void printVowelFrequency(std::map<char, int> listVowels) {
    for (std::pair<char, int> pair : listVowels) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

int main() {
    std::string word_;
    std::cin >> word_;
    printVowelFrequency(getMappedVowels(word_));
}