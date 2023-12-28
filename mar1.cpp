#include<iostream>
using namespace std;

int main()
{
 
      int arr[3][3],total = 0;

      for(int  i = 0; i < 3; i++)
      {

            for(int n = 0; n < 3; n++)
	    {
		
		    cout << "Enter a value : ";
		    cin >> arr[i][n];

	    }

      }

	for(int i = 0; i < 3; i++)
	{
	
		for(int n = 0; n < 3; n++)
		{

 			total = total + arr[i][n];
		}

	}
	
	cout << "\n" << "Total is : " << total;

	return 0;

}