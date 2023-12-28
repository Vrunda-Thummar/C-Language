#include<iostream>
using namespace std;

int main()
{
     int i=1,n,k=1;

     while(i <= 5)
     {
	 n=i;

	 while(n <= 5)
	 {
	       cout << " ";

	       n++;
	 }

	 k=1;

	 while(k <= i)
	 {
	       cout << "* ";

	       k++;
	 }

	 cout << "\n";

	 i++;
     }

     
}
