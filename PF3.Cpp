#include<iostream>
using namespace std;

int main()
{
     char i, n, k = 65;

     for(i = 1; i <= 5; i++)
     {
      
       for(n = 1; n <= i; n++, k++)
       {
	    
       if(i % 2 == 0)
	     {
		      
          cout << k + 32;
	     
       }
	     else
	     {
		      
          cout << k;
	     
       }
       
       }
       
       cout << "\n";
     
     }

     return 0;

}