#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

// 입력 스트림에서 단어들을 읽어 벡터에 저장하는 함수
std::vector<std::string> readWordsFromStream(std::istream& inputStream) {
    std::vector<std::string> words;
    std::string word;
    while (inputStream >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    std::cout << "Enter some words (press Ctrl+D to finish):" << std::endl;

    // 단어들을 읽어 벡터에 저장
    std::vector<std::string> words = readWordsFromStream(std::cin);

    // 단어의 개수 출력
    std::cout << "Total number of words: " << words.size() << std::endl;

    // 각 단어의 등장 횟수를 저장하는 unordered_map 생성
    std::unordered_map<std::string, int> wordCounts;
    for (const auto& word : words) {
        // 단어가 이미 맵에 있는지 확인하고, 없으면 0으로 초기화한 후 증가
        wordCounts[word]++;
    }

    // 각 단어와 해당 단어의 등장 횟수 출력
    std::cout << "Word frequencies:" << std::endl;
    for (const auto& pair : wordCounts) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}