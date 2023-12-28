#include<iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter value : ";
    cin >> a;

    if(a / 15)
    {
        cout << "Divisible by 5 or 3.";
    }
    else
    {
        cout << "Not divisible by 5 or 3.";
    }

    return 0;

}