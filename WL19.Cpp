#include<iostream>
using namespace std;

int main()
{
     int i=2,n=1,v=0,r,u;

     cout << "enter value : ";
     cin >> u;
     cout << n << ", ";

     while(i <= u)
     {
	   r=v+n;

	   cout << r << ", ";

	   v=n;

	   n=r;

	   i++;
     }

    return 0;

}