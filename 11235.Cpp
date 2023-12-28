#include<iostream>
using namespace std;

int main()
{
     int i,n=1,a=0,b,c;

     cout << "Enter value : ";
     cin >> c;
     cout << n << ", ";

     for(i = 2; i <= c; i++)
     {
	     b = a + n;
	     
          cout << b << ", ";
	 
          a = n;
	     
          n = b;
     }

     return 0;

}
