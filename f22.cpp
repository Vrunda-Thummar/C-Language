#include<iostream>
using namespace std;

void wl1()
{
    int i = 1, n = 1, v = 1;

    while(i <= 5)
    {
        n = 1;

        while(n <= i)
        {
            cout << v;

            v = 1 - v;

            n++;
        }
        
        cout << "\n";

        i++;
    } 
}

int main()
{
    wl1();

    return 0;
}