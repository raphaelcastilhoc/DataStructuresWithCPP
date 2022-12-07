#include "DirectoryFinder.h"

void DirectoryFinder::findSubdirectories(string directoryPath)
{
	if (fs::is_directory(directoryPath))
	{
		cout << "Directory: " << directoryPath << "\n";
		
		for (const auto& entry : fs::directory_iterator(directoryPath))
		{
			findSubdirectories(entry.path().string());
		}
	}
}
