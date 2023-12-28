#include<iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter value : ";
    cin >> age;

    if(age >= 18)
    {
        cout << "Eligible for vote.";
    }
    else
    {
        cout << "Not eligible for vote.";
    }

    return 0;

}