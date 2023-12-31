#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main() {
    std::string word;
    std::unordered_map<std::string, int> wordCount;

    while (std::cin >> word && word != "end") {
        wordCount[word]++;
    }

    std::vector<std::string> repeatedWords;
    for (const auto& pair : wordCount) {
        if (pair.second > 1) {
            repeatedWords.push_back(pair.first);
        }
    }

    std::sort(repeatedWords.begin(), repeatedWords.end());

    for (const auto& word : repeatedWords) {
        std::cout << word << " ";
    }

    return 0;
}
