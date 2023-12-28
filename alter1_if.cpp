#include<iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter a value of A : ";
    cin >> a;

    cout << "Enter a value of B : ";
    cin >> b;

    c = a;
    a = b;
    b = c;

   cout << "A : " << a << "\n";
   cout << "B : "<< b << "\n";
    
   return 0;
}