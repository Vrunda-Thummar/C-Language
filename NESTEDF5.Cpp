#include<iostream>
using namespace std;

int main()
{
       int i, n, v = 0, r = 0, u = 0, d = 0;

       for(i = 11; i <= 15; i++)
       {
	        
			v = i + 10;
	        r = v + 10;
	        u = r + 10;
	        d = u + 10;

	        for(n = 1; n <= 1; n++)
	        {
	            
				cout << i << " ";
	       
		    }

	        cout << v << " " << r << " " << u << " " << d ;

	        cout << "\n";
       
	   }

       return 0;

}