#pragma once

#include <iostream>
#include <vector>

using namespace std;

const int alphabetSize = 26;

class Trie
{
public:
    void insert(string word);

    bool checkIfWordExists(string word);

    vector<string> autocomplete(string wordPrefix);

private:
    struct Node
    {
        shared_ptr<Node> children[alphabetSize];

        bool isEndOfWord;
    };

    shared_ptr<Node> root;

    shared_ptr<Node> search(string word);

    vector<string> collectAllWords(shared_ptr<Node> node, string word, shared_ptr<vector<string>> words = make_shared<vector<string>>());
};