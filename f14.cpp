#include<iostream>
using namespace std;

void f3(int c)
{
    int i, n = 1, a = 0, b;

    for(i = 2; i <= c; i++)
    {
        b = a + n;
        
        cout << b << ", ";

        a = n;

        n = b;
    }
}

int main()
{
    int c;

    cout << "Enter value : ";
    cin >> c;

    f3(c);

    return 0;
}