//courseID:CIS265-001
//name: Michael Ippolito
//Assignment#5
//Due by 2/23/2019

#include <iostream>
#include <iomanip>
using namespace std;
const int ROWS = 5;
const int COLS = 5;

  
void getTotal(int array[ROWS][COLS]);
void getAverage(int array[ROWS][COLS]);
void getRowTotal(int array[ROWS][COLS]);
void getColumnTotal(int array[ROWS][COLS]);
void getHighestInRow(int array[ROWS][COLS]);
void getLowestInROw(int array[ROWS][COLS]);



int total = 0;
int rowtotal = 0;
int coltotal = 0;
double avtotal = 0;
double average = 0;
    
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Array total funtion
void getTotal(int array[ROWS][COLS], int r, int c)
{
	for(int row = 0; row < r; row++)
	{
		for(int col = 0; col < c; col++)
		{
			total += array[row][col];
		}
	}
	cout << "The total of the whole array is " << total << endl;
	cout << endl;
}

//Row total funtion
void getRowTotal(int array[ROWS][COLS], int r, int c)
{
	for(int row = 0; row < r; row++)
	{
		for(int col = 0; col < c; col++)
		{
			rowtotal += array[row][col];
			
		}
	
	cout << "The total of row " <<  (row +1) << " is " << rowtotal << endl;
	rowtotal = 0;
	}
	cout << endl;
}

//column total function
void getColumnTotal(int array[ROWS][COLS], int r, int c)
{
	for(int col = 0; col < c; col++)
	{
		for(int row = 0; row < r; row++)
		{
			coltotal += array[row][col];	
		}
		
	cout << "The total of column " <<  (col +1) << " is " << coltotal << endl;
	coltotal = 0;
	}
	cout << endl;
}

//Average of entire array
void getAverage(int array[ROWS][COLS], int r, int c)
{
	for(int row = 0; row < r; row++)
	{
		for(int col = 0; col < c; col++)
		{
			avtotal += array[row][col];
		}
	}
	average = avtotal/25;
	
	cout << "The average of the array is " << fixed << setprecision(2)<< average << endl;
	cout << endl;
}

//Highest number in each row
void getHighestInRow(int array[ROWS][COLS], int r, int c)
{
	int max = array[0][0];
     for (int i = 0; i < r; i++)
     {
         for (int j = 0; j < c; j++)
         {
             if (array[i][j] > max)
             {
                max = array[i][j];
             }
         }
     cout << i+1 << " row's highest value " << max << endl;
     max = 0;
	 }
     cout << endl;
}

//Lowest number in each row
void getLowestInROw(int array[ROWS][COLS], int r, int c)
{

     for (int i = 0; i < r; i++)
     {	
	 	int min = array[i][0];
         for (int j = 0; j < c; j++)
         {
             if (array[i][j] < min)
             {
                min = array[i][j];
             }
         }
     cout << i+1 << " row's lowest value " << min << endl;
     min = 0;
	 }
	 cout << endl;
}
int main(int argc, char** argv) 
{
	int total = 0;
	int rowtotal = 0;
	int coltotal = 0;
	int avtotal = 0;
	int average = 0;
	
	int array[ROWS][COLS] = 
{ {2, 7, 9, 6, 4},
  {6, 1, 8, 9, 4},
  {4, 3, 7, 2, 9},
  {9, 9, 0, 3, 1},
  {6, 2, 7, 4, 1}};

	getTotal(array, ROWS, COLS);
	getAverage(array, ROWS, COLS);
	getRowTotal(array, ROWS, COLS);
	getColumnTotal(array, ROWS, COLS);
	getHighestInRow(array, ROWS, COLS);
	getLowestInROw(array, ROWS, COLS);
	
	
	return 0;
}

