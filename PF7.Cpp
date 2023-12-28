#include<iostream>
using namespace std;

int main()
{
     char i, n, k = 97;

     for(i = 1; i <= 5; i++)
     {
	 
	    for(n = 1; n <= i; n++, k++)
	    {
	    
		    if(n % 2 == 0)
	        {

		        if(k - 32)
                {
		             cout << k ;
				}
			
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