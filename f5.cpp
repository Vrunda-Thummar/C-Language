#include<iostream>
using namespace std;

void b5(int c)
{
    int far;

    far = c * (9/5) + 32;

    cout << far;
}
int main()
{
    int c;

    cout << "Enter value : ";
    cin >> c;

    b5(c);
    
    return 0;
}