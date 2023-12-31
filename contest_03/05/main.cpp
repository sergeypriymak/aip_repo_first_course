#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::map<std::string, int> wordCount;

    for (int i = 0; i < n; ++i) {
        std::string word;
        std::cin >> word;
        wordCount[word]++;
    }

    int maxCount = 0;
    for (const auto& pair : wordCount) {
        maxCount = std::max(maxCount, pair.second);
    }

    std::vector<std::string> mostFrequentWords;
    for (const auto& pair : wordCount) {
        if (pair.second == maxCount) {
            mostFrequentWords.push_back(pair.first);
        }
    }

    std::sort(mostFrequentWords.begin(), mostFrequentWords.end());

    for (const auto& word : mostFrequentWords) {
        std::cout << word << " ";
    }

    return 0;
}
