#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter value : ";
    cin >> a;

    cout << "Enter value : ";
    cin >> b;

    if(a < b)
    {
        cout << "A is smallest.";
    }
    else
    {
        cout << "B is smallest.";
    }

    return 0;
    
}