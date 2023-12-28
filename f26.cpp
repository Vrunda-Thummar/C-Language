#include<iostream>
using namespace std;

void wl5()
{
    int i = 5, n;

    while(i >= 1)
    {
        n = i;

        while(n <= 5)
        {
            cout << n;

            n++;
        }
        cout << "\n";

        i--;
    }
}

int main()
{
    wl5();

    return 0;
}