#include "Trie.h"

void Trie::insert(string word)
{
	if (root == nullptr)
	{
		root = make_shared<Node>();
	}

	auto node = root;

	for (int i = 0; i < word.length(); i++)
	{
		auto index = word[i] - 'a';
		if (!node->children[index])
			node->children[index] = make_shared<Node>();

		node = node->children[index];
	}

	node->isEndOfWord = true;
}

bool Trie::checkIfWordExists(string word)
{
	auto node = search(word);
	return node ? node->isEndOfWord : false;
}

vector<string> Trie::autocomplete(string wordPrefix)
{
	auto node = search(wordPrefix);
	if (node)
	{
		return collectAllWords(node, wordPrefix);
	}
}

shared_ptr<Trie::Node> Trie::search(string word)
{
	auto node = root;

	for (int i = 0; i < word.length(); i++)
	{
		auto index = word[i] - 'a';
		if (!node->children[index])
			return nullptr;

		node = node->children[index];
	}

	return node;
}

vector<string> Trie::collectAllWords(shared_ptr<Node> node, string word, shared_ptr<vector<string>> words)
{
	if (node->isEndOfWord)
	{
		words->push_back(word);
	}

	for (int i = 0; i < alphabetSize; i++)
	{
		if (node->children[i])
		{
			collectAllWords(node->children[i], word + char(i + 'a'), words);
		}
	}

	return *words;
}