#include<iostream>
using namespace std;

int main()
{
      int  i=1,n,v=1;

      cout << "enter value : ";
      cin >> n;

      cout << i << ", ";

      while(i <= n)
      {

	  v=i*2;

	  cout << v << ", ";

	  i++;

      }

      return 0;
}