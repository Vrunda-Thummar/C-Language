#include<iostream>
using namespace std;

void f1()
{
    int i;
    
    for(i = 10; i >= 1; i--)
    {
        cout << i << ", ";
    }
}

int main()
{
    f1();

    return 0;
}