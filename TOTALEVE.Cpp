#include<iostream>
using namespace std;

int main()
{
     int i, n = 0;

     for(i = 2; i <= 10; i += 2)
     {
      	
          n = n + i;
	
          cout << i << ", ";
     }
	
     cout << "\n" << "Total is : " << n;

	return 0;
}