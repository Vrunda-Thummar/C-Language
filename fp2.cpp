#include<iostream>
using namespace std;

int arr[20];

int test(int a)
{
   cout << arr[a] << ", ";

    if(a == 19)
    {
        return 0;
    }

    return test(++a);
}

int main()
{
    for(int i = 0; i < 20; i++)
    {
        arr[i] = i + 1;
    }

    test(0);

    return 0;
}