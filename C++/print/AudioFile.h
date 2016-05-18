#include "file.h"
class AudioFile : public file
{
	public:
		string PrintCommand();
		AudioFile(string name);
};