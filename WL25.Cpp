#include<iostream>
using namespace std;

int main()
{
     int i=1,n=25;

     while(i <= n)
     {
	   if(i%5==0)
	   {
		cout << "\n" << i << " ";
	   }
	   else
	   {
		cout << i << " ";
	   }

	   i++;

     }

     return 0;

}
