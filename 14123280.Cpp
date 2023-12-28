#include<iostream>
using namespace std;

int main()
{
     int i, n = 1, a = 1;

     cout << "Enter value : ";
     cin >> n;

     for(i=1; i<=n; i++)
     {
	  
       cout << i * a << ", ";

	  a = a * 2;
       
     }

     return 0;
}