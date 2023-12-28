#include <iostream>
using namespace std;
  
int main()
{
  
    int i, j, total = 0, arr[5][5];
    
    for(int i = 0; i < 5; i++)
    {

		for(int j = 0; j < 5; j++)
        {
		
			cout << "Enter a value of arr : ";
			cin >> arr[i][j];

		}

	}

	cout << "\n" ;
	        
	for (i = 0; i < 5; ++i) 
	{
            
        for (j = 0; j < 5; ++j) 
		{
             	
			cout << arr[i][j] << " ";
            	       
		}
         	
		cout << "\n";
          	  
	}
        	   
	for (i = 0; i < 5; ++i) 
	{
	
		for(j = 0; j < 5; j++)
		{
    
   			if(i < j)
			{

	            total = total + arr[i][j];
			}
            
		}

    }
        
    cout << "\n" << "Upper triangle total is = " << total;
             
	return 0;

}
