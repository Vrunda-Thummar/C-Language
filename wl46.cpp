#include<iostream>
using namespace std;

int main()
{
     
      int i=1,n,k=1;

      while(i <= 5)
      {
    
            n=i;

            while(n <= 5)
            {
                  
                  cout << " ";

                  n++;
            }

            k=1;

            while(k <= i)
            {
                 
                 cout << "* ";

                 k++;
            }

            i++;

            cout << "\n";                  

      }

      i=1;

      while(i <= 5)
      {
           
            n=1;

            while(n <= i)
            {
        
                    cout << " ";
 
                    n++;
            } 

            k=i;

            while(k <= 5)
            {
                  
                    cout << "* ";

                    k++;
            } 

            i++;

            cout << "\n";
     }

      return 0;

}