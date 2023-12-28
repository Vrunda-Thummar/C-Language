#include<iostream>
using namespace std;

void nf1()
{
    int i, n;

    for(i = 1; i <= 5; i++)
    {
        for(n = 1; n <= 5; n++)
        {
            cout << i << " ";
        }

        cout << "\n";
    }
    
}

int main()
{
    nf1();

    return 0;
}