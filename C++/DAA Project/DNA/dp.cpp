#include <iostream>
#include <fstream>
using namespace std;
int length=9;
int R=7;
int K=3;
long long int matrix[9][3][4];
const char poss[4] = {'A','C','G','T'};
class Nucleotide {
public:
	char value;
	int flag;
};
Nucleotide * array;
int possMat[4][4]= {{0,0,0,0},{1,0,0,0},{1,1,0,0},{1,1,1,0}};
int dp_solution(int index, int violation, int value) {
	if(index==length)
		return 0;
	else if(violation < 0)
		return 0;
	else if(matrix[index][violation][value] !=-1)
		return matrix[index][value][violation];
	else if(array[index].flag == 0 && poss[value] != array[index].value) {
		matrix[index][violation][value]=0;
		return 0;
	}
	else {
		int sum=0;
		for (int i = 0; i < 4; ++i)
		{
			int sum1 = dp_solution(index+1,violation-possMat[value][i],i);
			sum=sum+sum1;
		}
		matrix[index][violation][value]=sum;
		return sum;
	}
}
void Print_Answer(int index,int violation, int value) {
	if(index==length)
		return;
	else if(array[index].flag == 0) {
		cout<<array[index].value;
		int i=0;
		for (i = 0; i < 4; ++i)
		{
			if(poss[i]==array[index].value)
				break;/* code */
		}
		Print_Answer(index+1,violation-possMat[value][i],i);
	}
	else {
		for (int i = 0; i < 4; ++i)
		{
			if (violation-possMat[value][i] < 0)
				continue;	
			else if(R> matrix[index][violation-possMat[value][i]][i])
				R =R-matrix[index][violation-possMat[value][i]][i];
			else {
				cout<<poss[i];
				Print_Answer(index+1,violation-possMat[value][i],i);
				return;
			}
		}
		if(R>0)
			cout<<"No Sequence Possible";
	}
	return;
}
int main() {
	char a;
	array= new Nucleotide[length];
	for (int i = 0; i < length; ++i)
	{
		for(int j=0; j<K; j++) 
		{
			for(int k=0;k<4;k++)
				matrix[i][j][k]=-1;
		}
	}
	for(int i=1;i<length;i++) {
		cin>>a;
		array[i].value=a;
		if(a=='N')
			array[i].flag=1;
		else
			array[i].flag=0;
	}
	for (int i = 0; i < 4; ++i)
	{
		int answer= dp_solution(0,K,i);
		cout<<answer<<endl;
	}
	Print_Answer(0,K,0);
	cout<<endl;
}
