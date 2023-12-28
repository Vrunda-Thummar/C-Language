#include<iostream>
using namespace std;

int main()
{
     int i,n;

     for(i = 5; i >= 1; i--)
     {
	  
        for(n = 5; n >= i; n--)
	    {
	    
             cout << n;
	    
        }
	  
        cout << "\n";
     
     }

     return 0;
}
