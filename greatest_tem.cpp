//Write a program to return greatest value among pass arguments in a function using template. (be it int or double)

#include<iostream>
using namespace std;

template <class t>
t sum(t v, t T)
{
    // if(v < T)
    // {
    //     return T;
    // }
    // else
    // {
    //     return v;
    // }

    return v<T ? T : v;
}

int main()
{
    cout << sum(20,50);

}