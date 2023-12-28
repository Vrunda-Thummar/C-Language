#include<iostream>
using namespace std;
  
int main()
{
    char Str[10];
    int i;
  
    cout << "\n" << "Enter the String : ";
    cin >> Str;
  
    for (i = 0; Str[i] != '\0'; i++);

    cout << "\n" << "The Length is : " << i;
  
  
    return 0;
}
