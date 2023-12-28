#include<iostream>
using namespace std;

int main()
{
      int i=1,n=1,v=1;

      printf("enter value : ");
      scanf("%d",&n);

      while(i <= n)
      {
	  printf("%d, ",i*v);

	  v=v*2;

	  i++;
      }

      return 0;
}