#include<iostream>
using namespace std;

int p1(int i)
{
   int n = 0;

   while(i != 0)
   {
     n = n * 10 + i % 10;
     i = i / 10;
   }

   return n;
}

int main()
{
   int v, r;

   cout << "Enter value : ";
   cin >> v;

   r = p1(v);

   cout << "The reverse is: " << r;

   return 0;
}

