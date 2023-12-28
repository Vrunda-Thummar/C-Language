#include<iostream>
using namespace std;

int main()
{
     int i=65;

     while(i <= 90)
     {
	 if(i%4!=1)
	 {
		   if (i + 32)
		   {
	       cout << i << ", ";
		   }
	 }
	 else
	 {
	       printf("%c, ",i);
	 }

	 i+=2;
     }

     return 0;
}