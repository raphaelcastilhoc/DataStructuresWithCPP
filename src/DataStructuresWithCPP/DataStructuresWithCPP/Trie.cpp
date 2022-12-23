#include "Trie.h"

void Trie::insert(std::string word)
{
	if (root == nullptr)
	{
		root = std::make_shared<Node>();
	}

	auto node = root;

	for (int i = 0; i < word.length(); i++)
	{
		auto index = word[i] - 'a';
		if (!node->children[index])
			node->children[index] = std::make_shared<Node>();

		node = node->children[index];
	}

	node->isEndOfWord = true;
}

bool Trie::checkIfWordExists(std::string word)
{
	auto node = search(word);
	return node ? node->isEndOfWord : false;
}

std::vector<std::string> Trie::autocomplete(std::string wordPrefix)
{
	auto node = search(wordPrefix);
	if (node)
	{
		return collectAllWords(node, wordPrefix);
	}
}

std::shared_ptr<Trie::Node> Trie::search(std::string word)
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

std::vector<std::string> Trie::collectAllWords(std::shared_ptr<Node> node, std::string word, std::shared_ptr<std::vector<std::string>> words)
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