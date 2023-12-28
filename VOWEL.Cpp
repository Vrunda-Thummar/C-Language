#include<iostream>
using namespace std;

int main()
{
   char c;

   cout << "Enter charactor : ";
   cin >> c;

   if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
   {
	
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
	     {
	   
            cout << "It is vowel.";
	     
        }
	     else
	     {
	   
            cout << "It is consonant.";
	
         }
   }
   else
   {
      
      cout << "It is not alphabetic character.";
   
   }

   return 0;

}


