#include<iostream>
using namespace std;

void i2(int marks)
{

     if(marks >= 75)
    {
        cout << "Grade A";
    }
    else if(60 <= marks && marks < 75)
    {
        cout << "Grade B";
    }
    else if(45 <= marks && marks < 60)
    {
        cout << "Grade C";
    }
    else if(35 <= marks && marks < 45)
    {
        cout << "Grade d";
    }
    else if(marks < 35)
    {
        cout << "student is fail.";
    }
    
}

int main()
{
    int marks;

    cout << "Enter your marks : ";
    cin >> marks;

    i2(marks);

    return 0;
}