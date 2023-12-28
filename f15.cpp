#include<iostream>
using namespace std;

void f4()
{
    int i;

    for(i = 65; i <= 90; i += 2)
    {
        if(i % 4 != 1)
        {
            if(i + 32)
            {
                cout << i << ", ";
            }
            else
            {
                cout << i << ", ";
            }
        }
    }
}

int main()
{
    f4();

    return 0;
}