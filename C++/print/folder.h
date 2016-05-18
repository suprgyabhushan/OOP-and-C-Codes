#include "file.h"
#include <vector>
using namespace std;
class folder
{
	private:
		vector <file *> files;
	public:
		string name;
		int getNoFiles();
		file * getFile(int i);
		void pushFile(file * f);
};