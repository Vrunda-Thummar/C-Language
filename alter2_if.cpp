#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    cout << "Enter a value of A : ";
    cin >> a;

    cout << "Enter a value of B : ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "A : " << a << "\n";
    cout << "B : " << b << "\n";

    return 0;
    
}