//courseID:CIS265-001
//name: Michael Ippolito
//Assignment#8
//Due by 04/03/2019

#include <iostream>
#include <cstring>
using namespace std;

int letterCount(char *);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char input[21];
	
	cout << "Please enter a word/phrase (20 Characters max)" << endl;	
	cin.getline(input, 21);
	
	cout << "The word/phrase entered has " << letterCount(input) << " characters" << endl;
	
	
	return 0;
}

int letterCount(char *ptr)
{
	int counter = 0;
	while(*ptr != NULL)
	{
		counter++;
		ptr++;
	}
	return counter;
}
