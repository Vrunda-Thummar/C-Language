#include<iostream>
using namespace std;

int main()
{
      int i, n;

      cout << "Enter value : ";
      cin >> n;

      for(i = 1; i <= n; i++)
      {
	    if(i % 2 == 0)
	    {
	        cout << i*i << ", ";
	    }
	    else
	    {
	        cout << i << ", ";
	    }
      }
	  
	  cout << i ;

	  return 0;

}