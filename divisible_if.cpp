#include<iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter value : ";
    cin >> a;

    if(a / 5)
    {
        cout << "Divisible by 5.";
    }
    else
    {
        cout << "Not divisible by 5.";
    }

    return 0;

}