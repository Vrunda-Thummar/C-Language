#include<iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter value : ";
    cin >> a;

    if(a % 4 == 0)
    {
        cout << "Leap year.";
    }
    else
    {
        cout << "Not leap year.";
    }

    return 0;

}