#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;


void hotel_expenses(int, double&, double&, double&);
void trip_length(int&);
void reg_fees(double&);


int main()
{
    double  registrationFees = 0.0;
    int     totalDays = 0;
    double  excessHotel = 0.0,
            hotelTotal = 0.0,
            hotelReimburse = 0.0;


    trip_length(totalDays);
    hotel_expenses(totalDays, hotelTotal, excessHotel, hotelReimburse);
    reg_fees(registrationFees);

    cout << "Days spent on trip: " << totalDays << endl;
    cout << "Total being reimbursed for hotel expenses: " << hotelReimburse<< endl;
    cout << "Total not being reimbursed for hotel expenses: " << excessHotel<< endl;
    cout << "Total spent on registration fees: " << registrationFees << endl;



}

void trip_length(int &totalDays)
{
    totalDays = 0;
    cout << "How many days was the business trip?" << endl;
    cin >> totalDays;
        while ( totalDays < 0 )
        {
            cout << "Please input a number greater than 0" << endl;
            cin >> totalDays;
        }

}

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


