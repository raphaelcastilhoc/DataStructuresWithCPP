#pragma once

#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;


class DirectoryFinder
{
public:
	void findSubdirectories(string directoryPath);
};

