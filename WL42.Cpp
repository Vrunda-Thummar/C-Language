#include<iostream>
using namespace std;

int main()
{
      int i=1,n;

      while(i <= 5)
      {
	  n=i;

	  while(n >= 1)
	  {
	      printf("%c",n + 64);

	      n--;
	  }

	  printf("\n");

	  i++;
      }

     
}
