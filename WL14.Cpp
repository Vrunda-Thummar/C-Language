#include<iostream>
using namespace std;

int main()
{
     int i = 1, n, v = 0;

     cout << "enter value : ";
     cin >> n;

     while(i <= n)
     {
	
          v = v + i;

	     cout << v << ", ";

          i += 2;
     
     }
     
     return 0;
}