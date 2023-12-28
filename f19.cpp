#include<iostream>
using namespace std;

void nf3()
{
    int i, n;

    for(i = 1; i <= 10; i += 2)
    {
        for(n = 1; n <= 10; n += 2)
        {
            cout << i << " ";
        }
        
        cout << "\n";
    }
}

int main()
{
    nf3();

    return 0;
}