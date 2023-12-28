#include<iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks : ";
    cin >> marks;

    if(marks >= 75)
    {
        cout << "Grade A";
    }
    else if(marks >= 60 && marks < 75)
    {
        cout << "Grade B";
    }
    else if(marks >= 45 && marks < 60)
    {
        cout << "Grade C";
    }
    else if(marks >= 35 && marks < 45)
    {
        cout << "Grade D";
    }
    else if(marks < 35)
    {
        cout << "Fail.";
    }

    return 0;
}