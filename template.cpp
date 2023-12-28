//template

#include<iostream>
using namespace std;

template <class t>
t sum(t x, t y)
{
    
    return x + y;

}

template <class t1, class t2>
t1 sum(t1 a, t2 b)
{

    return a * b;

}

int main()
{

    cout << sum(5,5) << endl;
    
    cout << sum(10.5,10.5) << endl;

    cout << sum(10.5,5);

}