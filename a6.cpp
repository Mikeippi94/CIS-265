//courseID:CIS265-001
//name: Michael Ippolito
//Assignment#6
//Due by 03/09/2019

#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void pntrfun( int [], int);

int main(int argc, char** argv) {
	
	int *pointer = NULL;
	int number;
	
	cout << "How many numbers are you going to enter?" << endl;
	cin >> number;
	
	
	if (number <= 0)
	{
		cout << "Please enter a number greater than zero: " << endl;
		cin >> number;
	}
	else
	pntrfun(pointer, number);
	
	return 0;
}

void pntrfun( int pointer[], int number)
{
	pointer = new int[number];
	int temp;
	
	
	for (int counter = 0; counter < number; counter++)
	{
		cout << "Enter a number: " << counter + 1 << endl;
		cin >> temp;
		*(pointer + counter) = temp;
	}
	
	cout << "The items you have entered are: " << endl;
	for (int counter = 0; counter < number; counter++)
	{
		cout << counter + 1 <<  " Number is: " << *(pointer + counter) << endl;
			
	}
	
	delete []pointer;
	
}
	
	
