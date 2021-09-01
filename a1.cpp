//courseID:CIS165-001
//name: 
//Michael Ippolito
//Assignment#1
//Due by 1/26/2019


#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int floor;
	int rooms;
	int guest;
	int empty;
	float total_room;
	float total_occupied;
	float total_precent;
	float unoccupied;
	
	//Input
	cout << "How many floors " << endl;
	cin >> floor; 
	cout << endl;
	
	while (floor < 1)
    {
        cout << "Number of floors must be at least be 1. Please input how many floors ";
        cin >> floor;
    }

	for(int i = 1; i <= floor; i++ )
    {
    
        if(i == 13)
    	{
    		i++;
		}
		
		cout << "Floor Number: " << i << endl;
		cout << "How many rooms on this floor:" << endl;
		cin >> rooms;
		
		while (rooms < 10)
            {
                cout << "Number of rooms on floor must be 10 or more. Please input number of rooms ";
                cin >> rooms;
            }
		cout << "How many rooms are occupied: " << endl;
		cin >> guest;
		total_occupied += guest;
		total_room += rooms;
        
	}
    
	//Processing
	unoccupied = total_room - total_occupied;
    total_precent = (total_occupied/total_room)*100;
    
    //Output
    cout << "Total number of floor(s): " << floor << endl; 
	cout << "Total number of room(s): " << total_room << endl;
	cout << "Total number of Unoccupied room(s): " <<  unoccupied << endl;
	cout << "Total number of occupied room(s): " << total_occupied << endl;
	cout << "Total precentage occupied: " << fixed << setprecision(2) << total_precent << "%" << endl;
	return 0;
}
