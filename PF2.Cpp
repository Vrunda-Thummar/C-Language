#include<iostream>
using namespace std;

int main()
{
    int i,n,v=1;

    for(i = 1; i <= 5; i++)
    {
	 
         for(n=1; n<=i; n++)
	       {
	   
              printf("%d",v);

	            v++;
	       }
	 
         printf("\n");
    }

    return 0;

}
