//Michael Ippolito, Nick Fontana, Andres Pulgarin, Henry Velasquez, Manuel Ackattupathil
//CIS-265
//2/21/2019
#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>

using namespace std;

// funtion Prototypes
int getDay(int);
void getTime(double&, double&);
double getAirfare(double);
double getCarRental(double);
double PrivateCarFee(double);
void getParking(double&,double&);
void getTaxi(double&,double&);
void reg_fees(double&);
void hotel_expenses(int, double&, double&, double&);
double Breakfast(double,double&,double&,int);
double Lunch(double,double&,double&,int);
double Dinner(double,double&,double&,int);
//-----------------------------------------------------------------------------------------
//int main()
//----------------------------------------------------------------------------------------------------

int main()
{
    int d;
	int days = 0;
    double arriv_time;
    double depar_time;
    double air_ticket;
    double car_rent;
    double carfee;
    double parking;
    double miles;
    double taxiFee;
    double registration;
    double registrationFees;
    double registration_tot;
    double total_cost;      //Overall total cost
    double total_allowed;    //overall allowed cost
    double meal;
    double total;
    double allowed_park;
    double allowed_taxi;
    double hotel;
    double priv_car;
    double allowed_hotel;
    double hotel_total;
    double allowed_breaksfast;
    double allowed_lunch;
    double allowed_dinner;
    double breaksfast;
    double lunch;
    double dinner;
    double taxi_spend;
    double spend_meal_tot;
    double allowed_meal_tot;
    double breakfastExpenses;
	double LunchExpenses; 
	double dinnerExpenses;
	double hotelTotal;
	double excessHotel; 
	double hotelReimburse;
    string employeeFirstName;
    string employeeLastName;
    
   
    
	
	
	
	cout << setw(20) << "Expense Report" << endl;
    cout << setw(20) << "______________" << endl << endl;

    cout << "Please enter your First and Lastname: " << endl;
    cin >> employeeFirstName >> employeeLastName;
    cout << endl;

    days = getDay(days);
    d = static_cast<int>(days);
    cout << endl;

    getTime (depar_time,arriv_time);
    cout << endl;

    cout << "Travel Expenses" <<endl;
    cout << "_______________" <<endl;
    air_ticket = getAirfare(air_ticket);
    car_rent = getCarRental(car_rent);
    priv_car = PrivateCarFee(priv_car);
    allowed_park = 6.00 * days;
    getParking(parking, allowed_park);
    taxi_spend = days * taxiFee;
    allowed_taxi = 6.00 * days;
    getTaxi(taxiFee,allowed_taxi);
    cout << endl;

    //****************************************************************************

    cout << "Hotel/Registration Expenses" << endl;
    cout << "___________________________" << endl;
    reg_fees(registrationFees);
    allowed_hotel = 90.00 * days;
    hotel_expenses(days, hotelTotal, excessHotel, hotelReimburse);
    cout << endl;

    //****************************************************************************

    cout << "Food Expenses" << endl;
    cout << "_____________" << endl;
    allowed_breaksfast = 9.00 * days;
    allowed_lunch = 12.00 * days;
    allowed_dinner = 16.00 * days;
    breakfastExpenses = Breakfast(breakfastExpenses, depar_time, arriv_time,days);
    LunchExpenses=Lunch(LunchExpenses,depar_time, arriv_time, days);
    dinnerExpenses=Dinner(dinnerExpenses, depar_time, arriv_time, days);
    cout << endl;
    spend_meal_tot = breakfastExpenses + LunchExpenses + dinnerExpenses;
    allowed_meal_tot = allowed_breaksfast + allowed_lunch + allowed_dinner;
   
    //calc total
	total_cost = air_ticket + car_rent + priv_car + parking + taxiFee + registrationFees + hotelTotal + spend_meal_tot;
    total_allowed = air_ticket + car_rent + priv_car + allowed_park + allowed_taxi + registrationFees + allowed_hotel + allowed_meal_tot;

    //Display totals for the traveler
    cout << "_________________________________________________________" << endl;
	cout << endl;
    cout << endl;
	cout << "Total Expense Report for " << employeeFirstName << " " << employeeLastName << endl <<endl;
    cout << "*********************************************************" << endl;
    cout << "Total Days of trip: " << days << endl;
    cout << fixed << setprecision(2);
    cout << "Departure time: "<< depar_time << setw(20) << "Arrival time: " << arriv_time << endl;
    cout << setw(8) << setprecision(2) << showpoint << fixed;
    cout<< endl;
    cout << setw(29) << "Amount Spent" << setw(20) << "Amount Allowed" << endl;
    cout << setw(30) << "____________" << setw(20) << "______________" << endl;
    cout << "Airfare" << setw(20) << air_ticket << setw(20) << air_ticket << endl;
    cout << "Car Rental" << setw(17) << car_rent << setw(20) << car_rent << endl;
    cout << "Milage" << setw(21) << priv_car << setw(20) << priv_car << endl;
    cout << "Parking" << setw(20) << parking << setw(20) << allowed_park << endl;
    cout << "Taxi" << setw(23) << taxiFee << setw(20) << allowed_taxi << endl;
    cout << "Registration" << setw(15) << registrationFees << setw(20) << registrationFees << endl;
    cout << "Hotel" << setw(22) << hotelTotal << setw(20) << allowed_hotel << endl;
    cout << "Meal" << setw(23) << spend_meal_tot << setw(20) << allowed_meal_tot << endl;
    cout << setw(30) << "_________" << setw(20) << "_________" << endl;
    cout << "TOTALS" << setw(21) << total_cost << setw(20) << total_allowed << endl;
    cout << endl << endl;

    system ("pause");
    return 0;

}

//----------------------------------------------------------------------------
//Function: int getDay() that asks the user how many days were spent on the trip
//-----------------------------------------------------------------------------

int getDay(int days)
{
    cout << "Total amount of days on the trip?" << endl;
    cin >> days;

    while (days < 1)
    {
        cout << "Days of trip must be more then one day, Please enter a new number" << endl;
        cin >> days;
    }

    return days;
}

//------------------------------------------------------------------------------
//Function; void  getTime() that is used to ask the user the departure time and arrival time for the trip
//-----------------------------------------------------------------------------

void getTime(double &depar_time, double &arrivalTime)
{
    cout << "What time was your departure? (please use 24 hour format hh.mm)" << endl;
    cin >> depar_time;
    cout << endl;

    while ( depar_time <0 || depar_time > 23.59)
    {
        cout << "Invalid time entered: Please enter a number between 00.00 and 23.59" << endl;
        cin >> depar_time;
    }

    cout << "What time was your arrive? (please use 24 hour format hh.mm)" << endl ;
    cin >> arrivalTime;

    while ( arrivalTime <0 || arrivalTime > 23.59)
    {
        cout << "Invalid time entered: Please enter a number between 00.00 and 23.59" << endl;
        cin >> arrivalTime;
    }
    return;
}

//--------------------------------------------------------------------------
//Function;double getAirfareAmount(double); thats used for airplane travel expenses
//-------------------------------------------------------------------------------

double getAirfare (double air_ticket)
{
    cout << "What was the cost of the plane ticket?" << endl;
    cin >> air_ticket;
    // Input validation for the aiplane travel
    while (air_ticket < 0)
    {
        cout << "Invalid amount entered: Amount must be greater then one dollar"  << endl;
        cin >> air_ticket;
    }

    return air_ticket;
}

//----------------------------------------------------------------------------------
//Function for car rental
//double getCarRental(double);
//Purpose: Function will calculate the amount of money spent on car rental for
//trip.
//-------------------------------------------------------------------------------------------------------

double getCarRental(double car_rent)
{
    cout << "How much did you spend on the car rental?" << endl;
    cin >> car_rent;
    //Input validation for the car rental amount
    while (car_rent < 0)
    {
        cout << "Invalid amount entered: Amount must be greater then one dollar" << endl;
        cin >> car_rent;
    }

    return car_rent;
}

//-------------------------------------------------------------------------------------
//double privateVehicleUse(double);
//Purpose: This function calculates the expense for miles driven using a private
//-------------------------------------------------------------------------------------

double PrivateCarFee(double carfee)
{
    double miles, fee=0.27, priv_car;
    char choice;
    cout<<"Did you use a private vehicle? Enter Y for yes or N for no\n";
    cin>>choice;
    while((choice != 'y') && (choice != 'Y') && (choice!= 'N') && (choice != 'n'))//Input Validation
    {
        cout<<"Enter Y for yes or N for no\n";
        cin>>choice;
    }
    if(choice=='Y' || choice=='y')
    {
        cout << "How many miles were driven?\n";
        cin >> miles;
        priv_car = miles*fee;
    }
    else if (choice=='N' || choice=='n')
        priv_car = 0;
 
    return priv_car;
}

//----------------------------------------------------------------------------------------------
//double getparking(double &, double &);
//Purpose: Calculates the parking fees that the businessperson encounters. They
//are allowed up to $6 per day. The employee has to pay any excess
//amount.
//----------------------------------------------------------------------------------------------


void getParking(double &parking, double &allowed_park)
{
    int days;


    cout << "How much was spent on parking spot/parking garage?" << endl;
    cin >> parking;

    //input validation for parking fee totals
    while (parking < 0)
    {
        cout << "Invalid amount entered: Amount must be greater then zero" << endl;
        cin >> parking;
    }
    return;
}

//----------------------------------------------------------------------------------------------
//Purpose:Function for company, total and, employer taxi costs
//getTaxiFee (double &, double &)
//--------------------------------------------------------------------------------
void getTaxi(double &taxiFee, double &allowed_taxi)
{
    int days;
    cout << "How much was spent on a taxi? (Please enter total amount of the whole trip)" << endl;
    cin >> taxiFee;

    //Input validation
    while (taxiFee < 0)
    {
        cout << "Invalid amount entered: Amount must be greater then zero" << endl;
        cin >> taxiFee;
    }
    return;
}

//----------------------------------------------------------------------------------------------
//Function:double conferenceCost (double) for conference fees for the traveler.
//Purpose: To ask and calculate the cost of conference and seminar registration fees.
//-----------------------------------------------------------------------------------


void reg_fees(double &Fees)
{
    string regAnswer;
    cout << "Did you pay any conference or seminar registration fees?(y or n)?" << endl;
    cin >>  regAnswer;
    while (regAnswer != "n" && regAnswer != "N" && regAnswer != "y" && regAnswer != "Y")
    {
        cout << "Please enter either 'y' or 'n': ";
        cin >> regAnswer;
    }
    if (regAnswer == "y" || regAnswer == "Y")
    {
        Fees = 0;

        cout << "How much did you pay for registration fees?" << endl;
        cin >> Fees;
            while ( Fees < 0 )
            {
                cout << "Please input a valid amount" << endl;
                cin >> Fees;
            }
    }

    if (regAnswer == "n" || regAnswer == "N")
    {
        Fees = 0.00;
    }
}
//----------------------------------------------------------------------------------------------
//Function for total hotel cost
//Purpose: To calculate the hotel expenses
//----------------------------------------------------------------------------------------------

void hotel_expenses (int totalNights, double &totalHotel, double &excessHotel, double &maxReimburse)
{
    const double maxPerNight = 90.00;
    totalHotel = 0;

    cout << "How much did you spend on lodging?" << endl;
    cin >> totalHotel;
    while ( totalHotel < 0 )
    {
        cout << "Please enter a valid amount" << endl;
        cin >> totalHotel;
    }
    maxReimburse = (totalNights - 1) * maxPerNight;
    excessHotel = totalHotel - maxReimburse;
}
//----------------------------------------------------------------------------------------------
//Function for meal totals
//----------------------------------------------------------------------------------------------


double Breakfast(double BreakfastExpenses, double &depar_time, double &arriv_time,int days)
{
    int breakfastdays;
     
    if(depar_time < 7.00)
        breakfastdays = days;
    else if(depar_time > 7.00)
        breakfastdays = days-1;
    else if(arriv_time > 8.00)
        breakfastdays = days;
    else if(arriv_time < 8.00)
        breakfastdays = days-1;
    cout<< "Breakfast days: " << breakfastdays << endl;
    cout<< "Enter Breakfast expenses" << endl;
    cin >> BreakfastExpenses;
    
    return BreakfastExpenses;
}
 
double Lunch(double LunchExpenses, double &depar_time, double &arriv_time,int days)
{
    int lunchdays;
     
    if(depar_time < 12.00)
        lunchdays = days;
    else if(depar_time > 12.00)
        lunchdays = days-1;
    else if(arriv_time > 13.00)
        lunchdays = days;
    else if(arriv_time < 13.00)
        lunchdays = days-1;
    cout<< "Lunch days: " << lunchdays << endl;    
    cout << "Enter lunch expenses" << endl;
    cin >> LunchExpenses;
  
    return LunchExpenses;
}
 
double Dinner(double DinnerExpenses, double &depar_time, double &arriv_time,int days)
{
    int dinnerdays;
     
    if(depar_time < 18.00)
        dinnerdays = days;
    else if(depar_time > 18.00)
        dinnerdays = days-1;
    else if(arriv_time > 19.00)
        dinnerdays = days;
    else if(arriv_time < 19.00)
        dinnerdays = days-1;
    cout<< "Dinner days: " << dinnerdays << endl;
	cout << "Enter dinner expenses" << endl;
    cin >> DinnerExpenses;
    
    return DinnerExpenses;
}

 
