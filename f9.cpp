#include<iostream>
using namespace std;

void i4(int a, int b, int c)
{
    if(a == b && b == c)
    {
        cout << "It is equilateral triangle.";
    }
    else 
    {
        if(a == b || b == c || c == a)
        {
            cout << "It is isosales triangle.";
        }
        else 
        {
            cout << "It is scalene triangle.";
        }
        
    }
}

int main()
{
    int a, b, c;

    cout << "Enter value : ";
    cin >> a;

    cout << "Enter value : ";
    cin >> b;

    cout << "Enter value : ";
    cin >> c;

    i4(a, b, c);

    return 0;
}