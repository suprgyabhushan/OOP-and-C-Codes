#include <iostream>
#include <fstream>
using namespace std;
int counter; // variable for counter for the sequence number
int length; // variable for the length of the DNA sequence
int R; // variable for the sequence number
int K; // variable for the form of the DNA sequence
const char poss[4] = {'A','C','G','T'}; // possible number of nucleotides

// Function for getting the current form which is represented by the weight of the trie data structure
int getWeight(char a, char b) {
	if(a>b)
		return 1;
	else
		return 0;
}

// Class for Nucleotides
class Nucleotide {
public:
	char value;
	int flag;
};
Nucleotide * array;


// Function for printing the Rth - Kth form DNA sequence
void PrintArray() {
	cout<<endl;
	for (int i = 1; i < length; i++)
	{
		cout<<array[i].value;
		/* code */
	}
	cout<<endl;
}


// Function for finding the Rth- Kth form DNA sequence
int getSequence(int i,int weight) {
	int f;
	// if form of (DNA seq > K) then it violates the condition, else if the DNA seq length is reached and counter is equal to R then return 1 else 0
	// Also if the occurring DNA nucleotide is known then get the current form of DNA seq and go to next, else if it is unknown "N", then consider all possible 		4 nucleotides to get the current form of the DNA sequence
	if (weight>K)
		return 0;
	else if(i==length) {
		counter++;
		if(counter==R)
			return 1;
		else
			return 0;
	}
	else if(array[i].flag==0) {
		f=getSequence(i+1,weight+getWeight(array[i-1].value,array[i].value));
		if(f==1)
			return 1;
		else
			return 0;
	}
	else
	{
		int j;
		for(j=0;j<4;j++) {
			array[i].value= poss[j];
			f=getSequence(i+1,weight+getWeight(array[i-1].value,array[i].value));
			if(f==1)
				return 1;
		}
		return 0;
	}
}

// Main Function
int main() {
	counter=0;
	char a;
	cout<<"Enter R value = ";
	cin>>R;
	cout<<"Enter K value = ";
	cin>>K;
	cout<<"Enter M value = ";
	cin>>length;
	length++;
	array= new Nucleotide[length];
	array[0].value='1'; // Initialising the DNA sequence starting form to 1
	
	// Setting the flag of each nucleotide to 1 if it is "N" else 0
	for(int i=1;i<length;i++) {
		cin>>a;
		array[i].value=a;
		if(a=='N')
			array[i].flag=1;
		else
			array[i].flag=0;
	}

	// Finding the sequence and Printing the sequence
	int answer= getSequence(1,1);
	if (answer==1)
	{
		PrintArray();
	}
	else 
	{
		cout<<"No Sequence Possible"<<endl;
	}

}
