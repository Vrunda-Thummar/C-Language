#include<iostream>
using namespace std;

int main()
{
 
    int arr[5][5];

    for(int  i = 0; i < 5; i++)
    {

        for(int n = 0; n < 5; n++)
	    {
		
		    cout << "Enter a value of arr : ";
		    cin >> arr[i][n];

	    }

    }

    cout << "\n";

    for(int i = 0; i < 5; i++)
    {

		for(int n = 0; n < 5; n++)
		{
	
			if(arr[i][n] == 0)
			{

				cout << " " << " ";
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
