#include<iostream>
using namespace std;

void f5()
{
    char i;

    for(i = 65; i <= 90; i++)
    {
        printf("%c = %d\n",i,i);
    }
}

int main()
{
    f5();

    return 0;
}