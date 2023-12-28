#include<iostream>
using namespace std;

int main()
{
    int unit;
    float charge, surcharge, amt, totalamt;

    cout << "Enter units : ";
    cin >> unit;

    if(unit <= 100)
    {
        charge = 60;
    }
    else if(unit <= 200 && unit <= 300)
    {
        charge = 80;
    }
    else 
    {
        charge = 90;
    }

    amt = unit * charge;

    if(amt > 300)
    {
        surcharge = amt * 15 /100;
    }

    totalamt = amt + surcharge;

    cout << "Bill = Rs." << totalamt;

    return 0;
    
}