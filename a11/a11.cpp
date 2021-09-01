//courseID:CIS265-001
//name: Michael Ippolito
//Assignment#11
//Due by 04/13/2019

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct MonthlyBudget
{
double housing;
double utilities;
double household;
double transportation;
double food;
double medical;
double insurance;
double entertainment;
double clothing;
double misc;
       
		MonthlyBudget set_budget()
       {
              MonthlyBudget set = {500.00, 150.00, 
			  					   65.00, 50.00, 250.00, 30.00, 
                                   100.00, 150.00, 75.00, 50.00};
        
              return(set);
       }
};

void getBudget(MonthlyBudget&);
void showBudget(MonthlyBudget);

int main ()
{
MonthlyBudget spent;   

getBudget(spent);
showBudget(spent);

system ("pause"); 
return 0;
}

void getBudget(MonthlyBudget &spent)
{
            cout << "Enter the housing expense: ";
            cin >> spent.housing;

            cout << "Enter the utilities expense: ";
            cin >> spent.utilities;
            
            cout << "Enter the household expense: ";
            cin >> spent.household;
            
            cout << "Enter the transportation expense: ";
            cin >> spent.transportation;
            
			cout << "Enter the food expense: ";
            cin >> spent.food;
            
            cout << "Enter the medical expense: ";
            cin >> spent.medical;

            cout << "Enter the insurance expense: ";
            cin >> spent.insurance;
            
            cout << "Enter the entertainment expense: ";
            cin >> spent.entertainment;
        
            cout << "Enter the clothing expense: ";
            cin >> spent.clothing;
            
            cout << "Enter the miscellaneous expense: ";
            cin >> spent.misc;
        
            cout << endl;
}

void showBudget(MonthlyBudget spent)
{
    double housing;
	double utilities;
	double household;
	double transportation; 
    double food;
	double medical;
	double insurance;
	double entertainment;
	double clothing; 
    double misc;
	double totalspent;
	double totalfixed;
	double totaldiff;
    
    string a;
    string b;
    string c;
    string d;
    string  e;
    string f;
    string g;
    string h;
    string i;
    string j;
    string k;
    
    MonthlyBudget set_budget;
    MonthlyBudget fix;
    fix = set_budget.set_budget();
    
    housing = fix.housing - spent.housing;
    utilities = fix.utilities - spent.utilities;
    household = fix.household - spent.household;
    transportation = fix.transportation - spent.transportation;
    food = fix.food - spent.food;
    medical = fix.medical - spent.medical;
    insurance = fix.insurance - spent.insurance;
    entertainment = fix.entertainment - spent.entertainment;
    clothing = fix.clothing - spent.clothing;
    misc = fix.misc - spent.misc;
    totalspent = spent.misc + spent.clothing + spent.entertainment + spent.insurance + spent.medical + spent.food + spent.transportation + spent.household + spent.utilities + spent.housing;
    totalfixed = fix.misc + fix.clothing + fix.entertainment + fix.insurance + fix.medical + fix.food + fix.transportation + fix.household + fix.utilities + fix.housing;
	totaldiff = totalfixed-totalspent;
	
	if(housing > 0)
	{
		a = "Under Budget";
	}
	else
	{
		a = "Over Budget ";
	}
	if(utilities > 0)
	{
		b = "Under Budget";
	}
	else
	{
		b = "Over Budget ";
	}
	if(household > 0)
	{
		c = "Under Budget";
	}
	else
	{
		c = "Over Budget ";
	}
	if(transportation > 0)
	{
		d = "Under Budget";
	}
	else
	{
		d = "Over Budget ";
	}
	if(food > 0)
	{
		e = "Under Budget";
	}
	else
	{
		e = "Over Budget ";
	}
	if(medical > 0)
	{
		f = "Under Budget";
	}
	else
	{
		f = "Over Budget ";
	}
	if(insurance > 0)
	{
		g = "Under Budget";
	}
	else
	{
		g = "Over Budget ";
	}
	if(entertainment > 0)
	{
		h = "Under Budget";
	}
	else
	{
		h = "Over Budget ";
	}
	if(clothing > 0)
	{
		i = "Under Budget";
	}
	else
	{
		i = "Over Budget ";
	}
	if(misc > 0)
	{
		j = "Under Budget";
	}
	else
	{
		j = "Over Budget ";
	}
	if(totaldiff > 0)
	{
		k = "Under Budget";
	}
	else
	{
		k = "Over Budget ";
	}
	
	
	cout << fixed << showpoint << setprecision(2);
	cout << "Total Montly Budget " << endl;
    cout <<"------------------------------------------------------------------" << endl;
	cout << "Catagories          SET EXPENSE          SPENT          DIFFERENCE" << endl;
    cout << "Housing" << "			$" << fix.housing << "		$" << spent.housing << "		$" << housing << "		"<< a << endl;
	cout << "Utilities" << "		$" << fix.utilities << "		$" << spent.utilities << "		$" << utilities << "		"<< b << endl;
	cout << "Household Expenses" << "	$" << fix.household << "		$" << spent.household << "		$" << household << "		" << c << endl;
	cout << "Transportation" << "		$" << fix.transportation << "		$" << spent.transportation << "		$" << transportation << "		"<< d << endl;
	cout << "Food" << "			$" << fix.food << "		$" << spent.food << "		$" << food << "		"<< e << endl;
	cout << "Medical" << "			$" << fix.medical << "		$" << spent.medical << "		$" << medical << "		"<< f << endl;
	cout << "Insurance" << "		$" << fix.insurance << "		$" << spent.insurance << "		$" << insurance << "		"<< g << endl; 
	cout << "Entertainment" << "		$" << fix.entertainment << "\t\t$" << spent.entertainment << "\t\t$" << entertainment << "		"<< h << endl;
	cout << "Clothing" << "		$" << fix.clothing << "		$" << spent.clothing << "		$" << clothing << "		"<< i << endl;
    cout << "Miscellaneous" << "		$" << fix.misc << "		$" << spent.misc << "		$" << misc << "		"<< j << endl;
    cout <<"------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "Monthly Total" << "		$" << totalfixed << "	$" << totalspent << "	$" << totaldiff << "		" <<k << endl;
}




