#include<iostream>
using namespace std;

void nf4()
{
    char i, n;

    for(i = 65; i < 90; i++)
    {
        if(i % 5 == 4)
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
    nf4();

    return 0;
}