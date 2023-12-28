#include<iostream>
using namespace std;

int main()
{
     int i,n;

     n=5;

     while(n >= 1)
     {
	  i=0;

	  while(i < 5)
	  {
	       cout << n << " ";

	       i++;
	  }

	  n--;

	  cout << "\n";

     }

     return 0;

}