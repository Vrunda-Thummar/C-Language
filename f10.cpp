#include<iostream>
using namespace std;

void i5(int unit)
{
    float charge, surcharge, amt, totalamt;

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
        surcharge = amt * 15 / 100;
    }
    
    totalamt = amt + surcharge;
    cout << "Bill = Rs. " << totalamt;

}

int main()
{
    int unit;

    cout << "Enter value : ";
    cin >> unit;

    i5(unit);

    return 0;
}