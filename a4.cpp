//courseID:CIS265-001
//name: Michael Ippolito
//Assignment#4
//Due by 2/23/2019

#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int RAIN = 12;
int main(int argc, char** argv) {
	
	int array[RAIN];
	
	int maxrain = array[0];
	int maxidx = array[0];
	int minrain = array[0];
	int minidx = array[0];
	double total_rainfall = 0;
	double average_rainfall = 0;
	


	for(int i = 0; i < RAIN; i++)
	{
		cout << "Amount of rainfall month "<< i+1 <<": " ;
		cin >> array[i];
		//Validation
        while ( array[i] < 0)
        {
            cout << "Please enter zero or more inches of rain for month " << i+1 <<": " << endl;
        	cin >> array[i];
        }
    }

	
	// Minimum/Maximum Rainfall
	for (int i = 0; i < RAIN; i++)	
	{	
		if (minrain > array[i])
            {
                minrain = array[i];
				minidx = i+1;
            }
        else if(array[i] >= maxrain)
        {
        	maxrain = array[i];
			maxidx = i+1;
		}
	}
	


		
	//Total Rainfall	
	for (int i = 0; i < RAIN; i++)
	{
		total_rainfall = total_rainfall + array[i];
	}
	
	//Average
	average_rainfall = total_rainfall /RAIN;
	
	
	cout << endl;
	cout << "Highest amount of rain is: " << maxrain << " inche(s) during month " << maxidx <<endl;
	cout << "Lowest amount of rain is: " << minrain << " inche(s) during month " << minidx << endl;
	cout << "Average rainfall per month: " << fixed << setprecision(2) << average_rainfall << " inche(s)" << endl;
	cout << "Total rainfall: " << total_rainfall << " inche(s)"<< endl;

	return 0;
}
