#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

// �Է� ��Ʈ������ �ܾ���� �о� ���Ϳ� �����ϴ� �Լ�
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

    // �ܾ���� �о� ���Ϳ� ����
    std::vector<std::string> words = readWordsFromStream(std::cin);

    // �ܾ��� ���� ���
    std::cout << "Total number of words: " << words.size() << std::endl;

    // �� �ܾ��� ���� Ƚ���� �����ϴ� unordered_map ����
    std::unordered_map<std::string, int> wordCounts;
    for (const auto& word : words) {
        // �ܾ �̹� �ʿ� �ִ��� Ȯ���ϰ�, ������ 0���� �ʱ�ȭ�� �� ����
        wordCounts[word]++;
    }

    // �� �ܾ�� �ش� �ܾ��� ���� Ƚ�� ���
    std::cout << "Word frequencies:" << std::endl;
    for (const auto& pair : wordCounts) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}