#include<iostream>
using namespace std;

int main()
{
    int i;

    for(i=65; i<=90; i+=2)
    {
          if(i % 4 != 1)
          {
              if(i + 32)
              {
	                cout << i  << ", ";
              }
          }
          else
          {
               cout << i << ", ";
          }
    }

    return 0;
}