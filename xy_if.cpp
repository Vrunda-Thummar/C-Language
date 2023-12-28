#include<iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter value : ";
    cin >> x;

    cout << "Enter value : ";
    cin >> y;

    if(x < 2000 || y < 500)
    {
        cout << "\n" << x;
    }
    else if(y > 100 && y < 500)
    {
        cout << "\n" << y;
    }
    
}