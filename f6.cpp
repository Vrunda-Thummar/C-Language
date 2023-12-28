#include<iostream>
using namespace std;

void i1(int a, int b)
{
    if (a < b)
    {
        cout << "A is smallest";
    }
    else
    {
        cout << "B is smallest";
    }
}

int main()
{
    int a,b;

    cout << "Enter a value of A: ";
    cin >> a;

    cout << "Enter a value of B : ";
    cin >> b;

    i1(a,b);

    return 0;
}