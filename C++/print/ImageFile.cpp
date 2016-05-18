#include "ImageFile.h"
string Imagefile::PrintCommand()
	{
		return "Name is "+Name+" : IMAGEFILE";
	}
Imagefile::Imagefile(string name)
	{
		Name=name;
	}