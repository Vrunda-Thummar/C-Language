#include<iostream>
using namespace std;

int main()
{
 
      int arr[3][3];

      for(int  i = 0; i < 3; i++)
      {

        for(int n = 0; n < 3; n++)
	    {
		
		    cout << "Enter a value of arr : " ;
		    cin >> arr[i][n];
	    }

      }

      cout << "\n";

      for(int i = 0; i < 3; i++)
      {

		for(int n = 0; n < 3; n++)
		{
	
			if(arr[i][n] == 0)
			{

				cout << " ";
			}
			else
			{		
			
				cout << arr[i][n] << " ";
			}
		}
	
	cout << "\n";

      }

      return 0;

}
