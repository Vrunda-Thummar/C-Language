#include<iostream>
using namespace std;

int main()
{
     int i, n, s = 0;

     cout << "Enter value : ";
     cin >> n;

     for(i = 1; i <= n; i += 2)
     {
	   s = s + i;
	   
       cout << s << ", ";
     }

     return 0;

}