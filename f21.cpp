#include<iostream>
using namespace std;

void nf5()
{
    int i, n;

    for(i = 5; i >= 1; i-=1)
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
    nf5();

    return 0;
}