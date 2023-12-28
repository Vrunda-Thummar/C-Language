#include<iostream>
using namespace std;

int main()
{
      char i=1,n=1,k=65;

      while(i <= 5)
      {
	   n=1;

	   while(n <= i)
	   {
		if(i%2==0)
		{
		   printf("%c",k+32);
		}
		else
		{
		   printf("%c",k);
		}

		n++;

		k++;
	   }

	   i++;

	   printf("\n");
      }

     return 0;

}