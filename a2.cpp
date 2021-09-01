//courseID:CIS265-001
//name: Michael Ippolito
//Assignment#2
//Due by 2/2/2019


#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double getSales(string const);
void findHighest(double, double, double, double);

int main(int argc, char** argv) 
{


//variables

	double northeastdollar;
	double southeastdollar;
	double northwestdollar;
	double southwestdollar;

	string const NORTHEAST = "NorthEast";
	string const SOUTHEAST = "SouthEast";
	string const NORTHWEST = "NorthWest";
	string const SOUTHWEST = "SouthWest";


	northeastdollar = getSales(NORTHEAST);
	southeastdollar = getSales(SOUTHEAST);
	northwestdollar = getSales(NORTHWEST);
	southwestdollar = getSales(SOUTHWEST);

	findHighest(northeastdollar, southeastdollar, northwestdollar, southwestdollar);


return 0;
}


double getSales(string const branch)
{
	//Input
	double dollar;
	cout << "What is the sales figure for the " << branch << " branch, please enter dollar amount: " << endl <<"$";
	cin >> dollar; 
	cout << endl;
	
	
	while (dollar < 0.00)
    {
        cout << "Dollar amount must be greater than zero. Please input a dollar amount: ";
        cin >> dollar;
    }
    
    return dollar;
}

void findHighest(double northeastdollar, double southeastdollar, double northwestdollar, double southwestdollar)
{
	
	double most = northeastdollar;
	string branch = "NORTHEAST";
	
	// Processing
	
	if(northeastdollar > most)
	{
		most = northeastdollar;
		branch = "NorthEast";
		
	}
	if(southeastdollar > most)
	{
		most = southeastdollar;
		branch = "SouthEast";
	}
	if(northwestdollar > most)
	{
		most = northwestdollar;
		branch = "NorthWest";
	}
	if(southwestdollar > most)
	{
		most = southwestdollar;
		branch = "SouthWest";
	}
	
	
	//Output
	cout << "The " << branch << " branch has made the most amount of money, which is $" << fixed << setprecision(2) << most << endl;
}	
	
    
	
	
    
    
    
	
