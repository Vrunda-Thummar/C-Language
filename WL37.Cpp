#include<iostream>
using namespace std;

int main()
{
      char i=1,n=1,k=97;

      while(i <= 5)
      {
	 n=1;

	 while(n <= i)
	 {
	      if(n%2==0)
	      {
		    printf("%c",k - 32);
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