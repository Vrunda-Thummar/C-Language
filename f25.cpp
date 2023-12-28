#include<iostream>
using namespace std;

void wl4()
{
    int i = 1, n = 1, k= 1;

    while(i <= 5)
    {
        n = 1;

        while(n <= i)
        {
            cout << "*";

            n++;
        }
        cout << "\n";

        i++;
    }
    i = 1;

    while(i <= 5)
    {
        n = 1;
        
        while(n <= i)
        {
            cout << " ";

            n++;
        }
        
        k = i;

        while(k <= 5)
        {
            cout << "*";

            k++;
        }
        cout << "\n";

        i++;
    }
}

int main()
{
    wl4();

    return 0;
}