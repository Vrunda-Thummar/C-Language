#include<iostream>
using namespace std;

int main()
{
     char i=65,n=89;

     while(i <= n)
     {
	   if(i%5==4)
	   {
		cout << i << "\n" << " ";
	   }
	   else
	   {
		cout << i << " ";
	   }

	   i++;

     }

     return 0;

}
