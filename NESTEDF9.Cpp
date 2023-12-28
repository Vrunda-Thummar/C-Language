#include<iostream>
using namespace std;

int main()
{
    char i, n;

    for(i = 65; i < 90; i++)
    {
	    
		if(i % 5 == 4)
	    {
	       
		    cout << " " << i << "\n";
	
	    }
	    else
	    {
	    
		    cout << " " << i;
	 
	    }
	
    }

    return 0;

}
