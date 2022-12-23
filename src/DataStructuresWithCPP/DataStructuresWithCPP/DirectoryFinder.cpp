#include <fstream>
#include <filesystem>

#include "DirectoryFinder.h"

void DirectoryFinder::findSubdirectories(std::string directoryPath)
{
	if (std::filesystem::is_directory(directoryPath))
	{
		std::cout << "Directory: " << directoryPath << "\n";
		
		for (const auto& entry : std::filesystem::directory_iterator(directoryPath))
		{
			findSubdirectories(entry.path().string());
		}
	}
}
