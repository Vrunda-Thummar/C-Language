#include<iostream>
using namespace std;

int main()
{
     int i, n, a = 1;

     cout << "Enter value : ";
     cin >> n;

     for(i = 1; i <= n; i++)
     {
	     a = i * 2;

	     cout << a << ", ";

         //a = i * 2;
     }

    return 0;
}
