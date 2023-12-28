#include<iostream>
using namespace std;

void nf2()
{
    int i, n;

    for(i = 1; i <= 25; i++)
    {
        if(i % 5 == 0)
        {
            cout << i << "\n";
        }
        else
        {
            cout << i << " ";
        }
    }
}

int main()
{
    nf2();

    return 0;
}