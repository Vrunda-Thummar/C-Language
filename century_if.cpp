#include<iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter value : ";
    cin >> a;

    if(a % 100 == 0)
    {
        cout << "Century year.";
    }    
    else
    {
        cout << "Not century year.";
    }

    return 0;
    
}