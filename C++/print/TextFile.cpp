#include "TextFile.h"
string TextFile::PrintCommand()
	{
		return "Name is "+Name+" : TEXTFILE";
	}
TextFile::TextFile(string name)
	{
		Name=name;
	}