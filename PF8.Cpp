#include<iostream>
using namespace std;

int main()
{
    int i, n, k = 1;

    for(i = 1; i <= 5; i++)
    {
	 
        for(n = 1; n <= i; n++)
	    {
	    
            cout << k;

	        k = 1 - k;
	    }
	 
        cout << "\n";
    
    }

    return 0;

}