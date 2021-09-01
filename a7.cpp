//courseID:CIS265-001
//name: Michael Ippolito
//Assignment#7
//Due by 03/09/2019

#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int *arrayExtend(int[], int size);


int main(int argc, char** argv) 
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5;
		
	int *arrPtr = arrayExtend(arr, size);
	
	for (int i = 0; i < size *2; i++ )
	{
		cout << arrPtr[i] << endl;
	}
	
	return 0;
}

int * arrayExtend(int arr[], int size)
{
	int * extendArr = new int[size*2];
	
	for(int i =0; i < size *2; i++)
	{
		if (i < size)
		{
			extendArr[i] = arr[i];
		}
		else
		{
			extendArr[i] = 0;
		}
	}
	
	return extendArr;
	delete []extendArr;
}
