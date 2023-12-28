#include<iostream>
using namespace std;

int main()
{
     int i = 1, n = 0;

     while(i <= 10)
     {
	
          n = n + i;

	     cout << i << ", ";

	     i += 2;
     }

     cout << "\n" << "Total is: " << n;

     return 0;
}