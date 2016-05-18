#include "folder.h"
int folder::getNoFiles()
		{
			return files.size();
		}
file * folder::getFile(int i)
		{
			return files[i];
		}
void folder::pushFile(file * f)
		{
			files.push_back(f);
		}