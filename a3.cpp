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

void in(double, double, double,double);
void out(double, double);
void in_Patient(double, double, double, double);
void out_Patient(double, double);

string customer;
double in_number_of_days;
double in_daily_rate;
double in_med_charges;
double in_hospital_serve;	
double out_hospital_serve;
double out_med_charges;
double sum;
double sum1;

int main(int argc, char** argv) 
{
//variables

	cout << "Is the customer and in-patient or out patient ? Please write in or out" << endl;
	cin >> customer;
	customer = customer;
	cout << endl;
	
	
	if(customer =="in")
	{
		in(in_number_of_days, in_daily_rate, in_hospital_serve, in_med_charges);
	}
	
	else if (customer =="out")
	{
		out(out_hospital_serve, out_med_charges);
	}
	else 
	{
		cout << "Please enter correct status of patient" << endl;
		cout << "Is the customer and in-patient or out patient ? Please write in or out" << endl;
		cin >> customer;
		customer = customer;
		cout << endl;
	}

return 0;
}



//Outputs

void in(double in_number_of_days, double in_daily_rate, double in_hospital_serve, double in_med_charges)
{
	in_Patient(in_number_of_days, in_daily_rate, in_hospital_serve, in_med_charges);
	
}


void out(double out_hospital_serve, double out_med_charges)
{

	out_Patient(out_hospital_serve, out_med_charges);

}
	


void in_Patient(double in_number_of_days, double in_daily_rate, double in_hospital_serve, double in_med_charges)
{

	//Inputs
	cout << "In-patient sheet. Please fill out accordingly " << endl;
	cout << "How many days have you spent at the hospital: " << endl;
	cin >> in_number_of_days; 
	cout << endl;
	
	cout << "Daily rate at the hopital for an In patient: " << endl;
	cin >> in_daily_rate;
	cout << endl;
	
	cout << "How much was Hospital services: " << endl;
	cin >> in_hospital_serve;
	cout << endl;
	
	cout << "Medication charges: " << endl;
	cin >> in_med_charges;
	cout << endl;
	
	//outputs
	cout<< "Total days you stayed at hospital is " << endl; 
	cout << in_number_of_days << endl;
    cout<<"Your daily Rate is " << endl;
	cout <<"$" << in_daily_rate << endl;
    cout<<"Total for Hospital service is " << endl;
	cout << "$"<< in_hospital_serve << endl;
    cout<<"Total for Hospital Medication is " << endl;
	cout << "$" << in_med_charges << endl;
	
	sum = (in_number_of_days * in_daily_rate) + in_med_charges + in_hospital_serve;
	
	
	cout << "Total charges for an in-patient: " << endl;
	cout <<  "$" << fixed << setprecision(2)  << sum << endl;
}	


void out_Patient(double out_hospital_serve, double out_med_charges )
{
	//Inputs
	cout << "How much was Hospital services: " << endl;
	cin >> out_hospital_serve;
	cout << endl;
	
	cout << "Medication charges: " << endl;
	cin >> out_med_charges;
	cout << endl;
	
	//outputs
    cout <<"Total for Hospital service is: " << endl;
	cout << out_hospital_serve << endl;
    cout <<"Total for Hospital Medication is: " << endl;
	cout << "$" <<  out_med_charges << endl;
	
	sum1 = out_hospital_serve + out_med_charges;
	
	
	cout << "Total charges for an out-patient: " << endl;
	cout << "$" << fixed << setprecision(2) << sum1 << endl;	

}
