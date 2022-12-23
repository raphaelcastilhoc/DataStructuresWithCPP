#pragma once

#include <iostream>
#include <vector>

const int alphabetSize = 26;

class Trie
{
public:
    void insert(std::string word);

    bool checkIfWordExists(std::string word);

    std::vector<std::string> autocomplete(std::string wordPrefix);

private:
    struct Node
    {
        std::shared_ptr<Node> children[alphabetSize];

        bool isEndOfWord;
    };

    std::shared_ptr<Node> root;

    std::shared_ptr<Node> search(std::string word);

    std::vector<std::string> collectAllWords(std::shared_ptr<Node> node, std::string word, std::shared_ptr<std::vector<std::string>> words = std::make_shared<std::vector<std::string>>());
};