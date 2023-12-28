#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    
    int max = 10;
    int min = 1;
    int rn; 
    
    rn = min + rand() % (max + min + 1);

    cout << rn;

    return 0;

}