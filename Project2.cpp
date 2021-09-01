#include <iostream>
#include <iomanip>

using namespace std;

int day(int);
void getTime (double&, double&);
double getAirfareAmount(double);
double getCarRentalAmount (double);
double getPrivateVechileExpense(double);
void getParkingAmount(double&,double&);
void getTaxiAmount(double&,double&);
double getRegistrationFee(double);
void getHotelAmount(double&,double&);
void getMealAmount (double&,double&);

//-----------------------------------------------------------------------------------------
//int main()
//----------------------------------------------------------------------------------------------------

int main()
{
    int days = 0;
    double arrivalTime;
    double departureTime;
    double airfareFee;
    double carRentalFee;
    double privateCarFee;
    double vechileExpense;
    double privateCarMilage = .27;
    double parkingFee;
    double taxiFee;
    double registrationFee;
    double spentTotal;      //Overall total cost
    double allowedTotal;    //overall allowed cost
    double mealTotal;
    double total;
    double allowedParking;
    double allowedTaxiFee;
    double hotelFee;
    double nightlyRate;
    double allowedHotelFee;
    double hotelFeeTotal;
    double allowedBreaksfastFee;
    double allowedLunchFee;
    double allowedDinnerFee;
    double breaksfastFee;
    double lunchFee;
    double dinnerFee;
    double allowedMealTotal;
    string employeeFirstName;
    string employeeLastName;
    int d;
    double parkingSpent;
    double taxiSpent;
    double spentMealTotal;

    cout<<setw(20)<<"Employee Expense Report"<<endl;
    cout<<setw(20)<<"________________________"<<endl<<endl;

    cout<<"Employee Name: ";
    cin >>employeeFirstName >>employeeLastName;
    cout<<endl;

    days = day(days);
    d = static_cast<int>(days);
    cout<<endl;

    getTime (departureTime,arrivalTime);
    cout<<endl;

    cout <<"TRAVEL  "<<endl;
    cout <<"--------"<<endl;
    airfareFee = getAirfareAmount(airfareFee);
    carRentalFee = getCarRentalAmount(carRentalFee);
    getPrivateVechileExpense(privateCarFee);
    allowedParking = 6.00 * days;
    getParkingAmount(parkingFee, allowedParking);
    taxiSpent = days * taxiFee;
    allowedTaxiFee = 6.00 * days;
    getTaxiAmount (taxiFee,allowedTaxiFee);
    cout <<endl;

    //****************************************************************************

    cout <<"FEE"<<endl;
    cout <<"---"<<endl;
    registrationFee= getRegistrationFee(registrationFee);
    allowedHotelFee = 90.00 * days;
    getHotelAmount (hotelFee,allowedHotelFee);
    cout<< endl;

    //****************************************************************************

    cout <<"MEAL"<<endl;
    cout <<"----"<<endl;
    allowedBreaksfastFee = 9.00 * days;
    allowedLunchFee = 12.00 * days;
    allowedDinnerFee = 16.00 * days;
    allowedMealTotal = allowedBreaksfastFee+allowedLunchFee+allowedDinnerFee;
    mealTotal= breaksfastFee +lunchFee +dinnerFee;
    getMealAmount (allowedMealTotal,spentMealTotal);
    cout<<endl;

    //calc total
    spentTotal=airfareFee+carRentalFee+privateCarFee+parkingFee+taxiFee+registrationFee+hotelFee+spentMealTotal+privateCarMilage;
    allowedTotal=airfareFee+carRentalFee+privateCarFee+allowedParking+allowedTaxiFee+registrationFee+allowedHotelFee+allowedMealTotal+privateCarMilage;

    //Display totals for the traveler
    cout <<"Employee Expense Report for "<<employeeFirstName<<" "<<employeeLastName<<endl<<endl;
    cout << "Total Days of trip: "<<days<<endl;
    cout << fixed << setprecision(2);
    cout << "Departure time: "<< departureTime<<setw(20)<<"Arrival time: " <<arrivalTime<<endl;
    cout <<setw(8)<<setprecision(2)<<showpoint<<fixed;
    cout<<endl;
    cout << setw(29)<<"Spent"<<setw(20)<< "Allowed"<<endl;
    cout << setw(30)<<"_________"<<setw(20)<<"_________"<<endl;
    cout <<"Airfare"<<setw(20)<<airfareFee<<setw(20)<<airfareFee<<endl;
    cout <<"Car Rental"<<setw(17)<<carRentalFee<<setw(20)<<carRentalFee<<endl;
    cout <<"Milage"<<setw(21)<<privateCarMilage<<setw(20)<<privateCarMilage<<endl;
    cout <<"Parking"<<setw(20)<<parkingFee<<setw(20)<<allowedParking<<endl;
    cout <<"Taxi"<<setw(23)<<taxiFee<<setw(20)<<allowedTaxiFee<<endl;
    cout <<"Registration"<<setw(15)<<registrationFee<<setw(20)<<registrationFee<<endl;
    cout <<"Hotel"<<setw(22)<<hotelFeeTotal<<setw(20)<<allowedHotelFee<<endl;
    cout <<"Meal"<<setw(23)<<spentMealTotal<<setw(20)<<allowedMealTotal<<endl;
    cout << setw(30)<<"_________"<<setw(20)<<"_________"<<endl;
    cout <<"TOTALS"<<setw(21)<<spentTotal<<setw(20)<<allowedTotal<<endl;
    cout <<endl<<endl;

    system ("pause");
    return 0;

}

//----------------------------------------------------------------------------
//Function: int getDay() that asks the user how many days were spent on the trip
//-----------------------------------------------------------------------------

int getDays(int days)
{
    cout << "How many days were spent on the trip?" << endl;
    cin >> days;

    while (days < 1)
    {
        cout << "Please enter a number greater than 1" << endl;
        cin >> days;
    }

    return days;
}

//------------------------------------------------------------------------------
//Function; void  getTime() that is used to ask the user the departure time and arrival time for the trip
//-----------------------------------------------------------------------------

void getTime (double &departureTime, double &arrivalTime)
{
    cout << "At what time did you depart for the trip? (00.00 format-militray time)" ;
    cin >> departureTime;
    cout <<endl;

    while ( departureTime <0 || departureTime > 23.59)
    {
        cout << "Error: Please enter a number between 00.00 and 23.59";
        cin >> departureTime;
    }

    cout << "At what time did you arrive for the trip? (00.00 format-militray time)" ;
    cin >> arrivalTime;

    while ( arrivalTime <0 || arrivalTime > 23.59)
    {
        cout << "Error: Please enter a number between 00.00 and 23.59";
        cin >> arrivalTime;
    }
    return;
}

//--------------------------------------------------------------------------
//Function;double getAirfareAmount(double); thats used for airplane travel expenses
//-------------------------------------------------------------------------------

double getAirfareAmount (double airfareFee)
{
    cout << "What was the total cost of the air fare?" << endl;
    cin >> airfareFee;
    // Input validation for the aiplane travel
    while (airfareFee < 0)
    {
        cout << "Error: Please enter a number greater than 0. Try again!" << endl;
        cin >> airfareFee;
    }

    return airfareFee;
}

//----------------------------------------------------------------------------------
//Function for car rental
//double getCarRentalAmount(double);
//Purpose: Function will calculate the amount of money spent on car rental for
//trip.
//-------------------------------------------------------------------------------------------------------

double getCarRentalAmount (double carRentalFee)
{
    cout << "What was the total cost of any car rentals?" << endl;
    cin >> carRentalFee;
    //Input validation for the car rental amount
    while (carRentalFee < 0)
    {
        cout << "Error:Please enter a number greater than 0. Try Again!" << endl;
        cin >> carRentalFee;
    }

    return carRentalFee;
}

//-------------------------------------------------------------------------------------
//double privateVehicleUse(double);
//Purpose: This function calculates the expense for miles driven using a private
//-------------------------------------------------------------------------------------

double getPrivateVechileExpense (double privateCarFee)
{
    const double RATE = 0.38;
    double miles;

    cout << "Were any miles driven in a private vehicle?" << endl;
    cin >> miles;
    //validation for private vehichle usage
    while (miles < 0)
    {
        cout << "Error:Please enter a value greater than 0. Try again!" << endl;
        cin >> miles;
    }

    privateCarFee = miles * RATE;

    return privateCarFee;
}

//----------------------------------------------------------------------------------------------
//double parkingFee(double, double);
//Purpose: Calculates the parking fees that the businessperson encounters. They
//are allowed up to $6 per day. The employee has to pay any excess
//amount.
//----------------------------------------------------------------------------------------------


void getParkingAmount(double &parkingFee, double &allowedParking)
{
    int days;


    cout << "How much was spent on parking?" << endl;
    cin >> parkingFee;

    //input validation for parking fee totals
    while (parkingFee < 0)
    {
        cout << "Error:Please enter a positive number. Try again!" << endl;
        cin >> parkingFee;
    }
    return;
}

//----------------------------------------------------------------------------------------------
//Purpose:Function for company, total and, employer taxi costs
//getTaxiFee ()
//--------------------------------------------------------------------------------
void getTaxiAmount (double &taxiFee, double &allowedTaxiFee)
{
    int days;
    cout << "How much was spent on taxi fare?" << endl;
    cin >> taxiFee;

    //Input validation
    while (taxiFee < 0)
    {
        cout << "Error: Enter a positive number. Try again!" << endl;
        cin >> taxiFee;
    }
    return;
}

//----------------------------------------------------------------------------------------------
//Function:double conferenceCost (double) for conference fees for the traveler.
//Purpose: To ask and calculate the cost of conference and seminar registration fees.
//-----------------------------------------------------------------------------------


double getRegistrationFee (double registrationFee)
{
    cout << "How much was spent on conference fees?" << endl;
    cin >> registrationFee;

    while (registrationFee < 0)
    {
        cout << "Error: Enter a positive number. Try again!" << endl;
        cin >> registrationFee;
    }

    return registrationFee;
}

//----------------------------------------------------------------------------------------------
//Function for total hotel cost
//Purpose: To calculate the hotel expenses
//----------------------------------------------------------------------------------------------

void getHotelAmount(double &hotelFee,double &allowedHotelFee)
{
    double hotelFeeTotal;
    int days;
    cout << "How much was spent on hotel?";
    cin >> hotelFee;
    cout <<endl;

    while (hotelFee < 0)
    {
        cout << "Error: Enter a positive number. Try again!" << endl;
        cin >> hotelFee;
    }
    hotelFeeTotal = hotelFee;

    return;
}

//----------------------------------------------------------------------------------------------
//Function for meal totals
//void meals();
//----------------------------------------------------------------------------------------------

void getMealAmount(double &allowedMealTotal,double &spentMealTotal)

{
    int day;
    int days = 0;
    double breakfast;
    double lunch;
    double dinner;
    double firstDay;
    double lastDay;
    double departureTime = 0;
    double arrivalTime = 0;


    for(int day = 1; day <= days; day++)
    {
        cout << "Day:" << day <<  endl;

        while (day < 2 && departureTime > 00.00 && departureTime<= 7.00)
        {
            cout << "Enter the cost of breakfast: ";
            cin >> breakfast;
            cout << "Enter the cost of lunch: ";
            cin >> lunch;
            cout << "Enter the cost of dinner: ";
            cin >> dinner;
        }

        while (day < 2 && departureTime > 7.01 && departureTime <=12.00)
        {
            cout << "Enter the cost of lunch: ";
            cin >> lunch;
            cout << "Enter the cost of dinner: ";
            cin >> dinner;
        }

        while (day < 2 && departureTime > 12.01 && departureTime <=18.00)
        {
            cout << "Enter the cost of dinner: ";
            cin >> dinner;
        }
        while (day > 1 && day < days )
        {
            cout << "Enter the cost of breakfast: ";
            cin >> breakfast;
            cout << "Enter the cost of lunch: ";
            cin >> lunch;
            cout << "Enter the cost of dinner: ";
            cin >> dinner;
        }

        while (day == days && arrivalTime > 8.00 && arrivalTime <= 13.00)
        {
            cout << "Enter the cost of breakfast: ";
            cin >> breakfast;

        }

        while (day == days && arrivalTime > 13.01 && arrivalTime <= 19.00)
        {
            cout << "Enter the cost of breakfast: ";
            cin >> breakfast;
            cout << "Enter the cost of lunch: ";
            cin >> lunch;
        }

        while (day == days && arrivalTime > 19.01)
        {
            cout << "Enter the cost of breakfast: ";
            cin >> breakfast;
            cout << "Enter the cost of lunch: ";
            cin >> lunch;
            cout << "Enter the cost of dinner: ";
            cin >> dinner;
        }
        cout <<endl;
        return ;

    }
}

