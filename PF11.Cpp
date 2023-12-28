#include<iostream>
using namespace std;

int main()
{
   int  i, n;
   char v = 'A';

   for(i = 1; i <= 5; i++)
   {
       
       for(n = 1; n <= i; n++)
       {
	  
            cout << v;

	        v++;

       }
       
       cout << "\n";

   }

   return 0;

}