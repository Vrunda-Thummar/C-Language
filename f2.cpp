#include<iostream>
using namespace std;

void b2(int inches, float cm)
{
    int total;

    total = inches*cm;

    cout << total;
}

int main()
{
    int inches;
    float cm;

    cout << "Enter value : ";
    cin >> inches;

    cout << "Enter value : ";
    cin >> cm;

    b2(inches,cm);

    return 0;
}