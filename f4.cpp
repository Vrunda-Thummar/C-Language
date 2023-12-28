#include<iostream>
using namespace std;

void b4(int p,int t,int r)
{
    int si;

    si = (p * t * r) / 100;

    cout << si;

}

int main()
{
    int p, t, r;

    cout << "Enter value : ";
    cin >> p;

    cout << "Enter value : ";
    cin >> t;

    cout << "Enter value : ";
    cin >> r;

    b4(p, t, r);

    return 0;
}