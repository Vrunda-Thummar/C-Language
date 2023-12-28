#include<iostream>
using namespace std;

int main()
{
     int i=1,n=1,v=1;

     i=1;

     while(i <= 5)
     {
	 n=1;

	 while(n <= i)
	 {
       		 cout << v ;

                 v++;

		 n++;
	 }

         i++;

	 cout << "\n";
     }

    return 0;

}
