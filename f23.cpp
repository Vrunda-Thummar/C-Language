#include<iostream>
using namespace std;

void wl2()
{
    int i = 1, n, k = 1;

    while(i <= 5)
    {
        n = i;
        
        while(n <= 5)
        {
            cout << " ";

            n++;
        }
        k = 1;

        while(k <= i)
        {
            cout << "* ";

            k++;
        } 
        
        cout << "\n";

        i++;
    } 
}

int main()
{
    wl2();

    return 0;
}