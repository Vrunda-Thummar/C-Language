#include<iostream>
using namespace std;

int a;
int sum = 0;

int total(int a)
{
    if (a == 9)
    {
        return 0;
    }

    return total(++a);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value : " ;
        cin >> a;

        sum = sum + a;
    }

    cout << "Total sum = " << sum;

    return 0;
}