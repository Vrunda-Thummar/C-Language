#include<iostream>
using namespace std;

void b1(int  w, int l)
{
    int area;

    area = w * l;

    cout << area;
}

int main()
{
    int w, l;

    cout << "Enter value : ";
    cin >> w;

    cout << "Enter value : ";
    cin >> l;

    b1(w,l);

    return 0;
}