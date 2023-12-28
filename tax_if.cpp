#include<iostream>
using namespace std;

int main()
{
    int income, tax;

    cout << "Enter yor income : ";
    cin >> income;

    if(income <= 2500)
    {
        tax = 0;
    }
    else if(income <= 5000)
    {
        tax = (income - 2500) * 0.1;
    }
    else if(income <= 10000)
    {
        tax = (income - 5000) * 0.2; 
    }
    else
    {
        tax = (income - 10000) * 0.3;
    }

    cout << "Income tax : " << tax;

    return 0;
}