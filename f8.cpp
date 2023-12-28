#include<iostream>
using namespace std;

void i3(int age)
{
    if(age >= 18)
    {
        cout << "Eligible for vote.";
    }
    else
    {
        cout << "Not eligible for vote.";
    }
}

int main()
{
    int age;

    cout << "Enter your age :";
    cin >> age;

    i3(age);

    return 0;
}