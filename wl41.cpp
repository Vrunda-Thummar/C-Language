#include<iostream>
using namespace std;

int main()
{
   
      char v='A';
      int i=1,n=1;

      while(i <= 5)
      {

            n=1;

            while(n <= i)
            {
 
                  cout << v;

                   v++;

                   n++;
             }

             i++;

             cout << "\n";
      }      

      return 0;

}