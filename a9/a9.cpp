//courseID:CIS265-001
//name: Michael Ippolito
//Assignment#9
//Due by 04/03/2019


#include <iostream>
#include <cstring>
using namespace std;

const int NUM = 11;
const int LENGTH = 100;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{

	char phoneNumbers[NUM][LENGTH] = {"Alejandra Cruz, 555-1233", 
		"Joe Looney, 555-0097", "Geri Palmer, 555-8787", 
		"Li Chen, 555-1212", "Holly Gaddis, 555-8878", 
		"Sam Wiggins, 555-0998", "Bob Kain, 555-8712", 
		"Tim Haynes, 555-7676", "Warren Gaddis, 555-9037", 
		"Jean James, 555-4939", "Ron Palmer, 555-2783" };

	char search[LENGTH];
	bool get = false;
	char *idContact = NULL;

	cout << "Please enter a name (Please use upper case for first letter in name): " << endl;
	cin.getline(search, LENGTH);
	
	for(int i = 0; i < NUM; i++)
	{
			idContact = strstr(phoneNumbers[i], search);
			if(idContact != NULL)
			{
				cout << phoneNumbers[i] << endl;
				get = true;
			}	
	} 		
	
	
	
	if(!get)
	{
		cout << "Sorry no Names matched input" << endl;	
	}	
	return 0;
}
