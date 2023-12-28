#include<iostream>
using namespace std;

void f2(int n)
{
    int i;

    for(i = -n; i <= n; i++)
    {
        cout << i << ", ";
    }
}

int main()
{
    f2(50);

    return 0;
}