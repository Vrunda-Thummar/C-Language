#include<iostream>
using namespace std;

void wl3()
{
    char i = 1, n = 1, k = 65;

    while(i <= 5)
    {
        n = 1;

        while(n <= i)
        {
            if(i % 2 == 0)
            {
              if(k + 32)
              
                 cout << k ;
              
            }
            else
            {
              cout << k;
            }
            n++;

            k++;
        }

    i++;

    cout << "\n";
    
    }
}

int main()
{
    wl3();

    return 0;
}
