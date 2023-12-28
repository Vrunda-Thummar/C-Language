#include<iostream>
using namespace std;

int main()
{
    int math, chem, phy, a, b;

    cout << "Enter math marks : ";
    cin >> math;

    cout << "Enter chem marks : ";
    cin >> chem;

    cout << "Enter phy marks : ";
    cin >> phy;

    a = math + chem + phy;
    cout << "Total is : " << a << "\n";

    b = math + phy;
    
    if(math >= 65 && chem >= 50 && phy >= 55 && a >= 190 || b >= 140)
    {
        cout << "Eligible for admission.";
    }    
    else
    {
        cout << "Not eligible for admission.";
    }

    return 0;
    
}