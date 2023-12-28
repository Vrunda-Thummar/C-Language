#include <iostream>
using namespace std;
  
int main()
{
  
    int i, j, arr[3][3], total = 0;
    
    for(int i = 0; i < 3; i++)
    {

		for(int j = 0; j < 3; j++)
        {
		
			cout << "Enter a value of arr : ";
			cin >> arr[i][j];

		}

	}

	cout << "\n";

    for (i = 0; i < 3; i++) 
	{
            
        for (j = 0; j < 3; j++) 
		{
             	
			cout << arr[i][j] << " ";
            	       
		}
         	
		cout << "\n";
          	  
	}
        	   
	for (i = 0; i < 3; ++i) 
	{
            
		for(j = 0; j < 3; j++)
		{
          	         
			if(i == j)
			{
				 total = total + arr[i][i];

			}
 		}
           
    }
        
    cout << "\n" <<  "diagonal elements total is = " << total;
	
	return 0;
}
