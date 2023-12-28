#include<iostream>
using namespace std;

int main()
{
      int i,n;

      n=1;

      while(n <= 10 )
      {

	  i=0;

	  while(i < 10)
	  {
		  cout << n << " ";

		  i+=2;
	  }
	       n+=2;

	      cout << "\n";
     }

     return 0;
}
