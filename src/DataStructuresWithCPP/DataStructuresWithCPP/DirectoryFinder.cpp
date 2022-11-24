#include "DirectoryFinder.h"

void DirectoryFinder::FindSubdirectories(string directoryPath)
{
	if (fs::is_directory(directoryPath))
	{
		cout << "Directory: " << directoryPath << "\n";
		
		for (const auto& entry : fs::directory_iterator(directoryPath))
		{
			FindSubdirectories(entry.path().string());
		}
	}
}
