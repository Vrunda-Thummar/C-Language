#include<iostream>
using namespace std;

int main()
{
    int i,n;

    for(i = 1; i <= 5; i++)
    {
	
        for(n = 1; n <= i; n++)
	    {
	    
            cout << "*";
	    
        }

	    cout << "\n";
     
    }

    return 0;

}