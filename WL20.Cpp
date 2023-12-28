#include<iostream>
using namespace std;

int main()
{
     float i=0.5,n=0.5;

     printf("enter value : ");
     scanf("%d",&n);

     while(i <= n)
     {
	    printf("%.2f, ",n+=i);

	    i++;
     }

     return 0;

}