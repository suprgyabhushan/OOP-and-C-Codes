#include "file.h"
using namespace std;
class TextFile : public file
{
public:
	string PrintCommand();
	TextFile(string name);
};