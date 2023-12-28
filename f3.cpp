#include<iostream>
using namespace std;

void b3(int s)
{
   int area;

   area = s*s;

   cout << area;
}

int main()
{
    int s;

    cout << "Enter value : ";
    cin >> s;

    b3(s);
    
    return 0;
}