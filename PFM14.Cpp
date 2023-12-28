#include<iostream>
using namespace std;

int main()
{
    int i, n, k;

    for(i = 1; i <= 5; i++)
    {
	    
		for(n = i; n <= 5; n++)
	    {
		
		    cout << " ";
	    
		}
	    
		for(k = 1; k <= i; k++)
	    {
	       
		   cout << "* ";
	    
		}
	    
		cout << "\n";

    }

	for(i = 1; i <= 5; i++)
    {
	
	    for(n = 1; n <= i; n++)
	    {
		
		    cout << " ";
	    
		}
	    
		for(k = i; k <= 5; k++)
	    {
	    
		    cout << "* ";
	    
		}
	    
		cout << "\n";

    }
   
    return 0;

}