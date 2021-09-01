//courseID:CIS265-001
//name: Michael Ippolito
//Assignment#3
//Due by 2/2/2019


#include <iostream>
#include <iomanip>
#include <string.h>
#include <cstdlib>
#include <string>
#include <cctype>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void in();
void out();
void in_Patient();
void out_Patient();
void in_Patient_Reciept();
void out_Patient_Reciept();

string customer;
double in_number_of_days;
double in_daily_rate;
double in_med_charges;
double in_hospital_serve;	
double out_hospital_serve;
double out_med_charges;

int main(int argc, char** argv) 
{
//variables

	cout << "Is the customer and in-patient or out patient ? Please write in or out" << endl;
	cin >> customer;
	customer = customer;
	cout << endl;
	
	
	if(customer =="in")
	{
		void in();
	}
	
	else if (customer =="out")
	{
		void out();
		
	}
	else 
	{
		cout << "Please enter correct status of patient" << endl;
	}

return 0;
}

void in()
{

	in_Patient();

	in_Patient_Reciept();
	

	cout<< "Total days you stayed at hospital is  : " << in_number_of_days << endl;
    cout<<"Your daily Rate is                     : $" << in_daily_rate << endl;
    cout<<"Total for Hospital service is         : $"<< in_hospital_serve << endl;
    cout<<"Total for Hospital Medication is      : $"<< in_med_charges << endl;

	
	
	
	double sum, total1, total2, total3, total4;
	
	total1 = in_number_of_days;
	total2 = in_daily_rate;
	total3 = in_med_charges;
	total4 = in_hospital_serve;
	sum = (total1 * total2) + total3 + total4;
	
	//output
	cout << fixed << setprecision(2) << "Total charges for an in-patient $" << sum << endl;
	
	
}


void out()
{
	out_Patient();
	
	out_Patient_Reciept();
	

    cout<<"Total for Hospital service is         : $" << out_hospital_serve << endl;
    cout<<"Total for Hospital Medication is      : $" << out_med_charges << endl;
	double sum1, out1, out2;
	
	out1 = out_med_charges;
	out2 = out_hospital_serve;
	sum1 = out1 + out2;
	
	
	cout << fixed << setprecision(2) << "Total charges for an out-patient $" << sum1 << endl;	
		
}
	
void in_Patient()
{

	
	cout << "In-patient sheet. Please fill out accordingly " << endl;
	cout << "How many days have you spent at the hospital: " << endl;
	cin >> in_number_of_days; 
	cout << endl;
	
	cout << "Daily rate at the hopital for an In patient: " << endl;
	cin >> in_daily_rate;
	cout << endl;
	
	cout << " How much was Hospital services: " << endl;
	cin >> in_hospital_serve;
	cout << endl;
	
	cout << "Medication charges: " << endl;
	cin >> in_med_charges;
	cout << endl;
	
}	

void out_Patient()
{
	cout << " How much was Hospital services: " << endl;
	cin >> out_hospital_serve;
	cout << endl;
	
	cout << "Medication charges: " << endl;
	cin >> out_med_charges;
	cout << endl;
}
