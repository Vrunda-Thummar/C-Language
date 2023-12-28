#include<iostream>
using namespace std;
 
int main() 
{

	int i, j, total = 0, arr[3][3];
 
 	  
	for (i = 0; i < 3; i++)
	{	
	    
		for (j = 0; j < 3; j++) 
		{
		    cout << "Enter the Element arr : ";
		    cin >> arr[i][j];
      		
		}

	}

	cout << "\n" ;
 
    for (i = 0; i < 3; i++) 
	{
            
        for (j = 0; j < 3; j++) 
		{
             	
			cout << arr[i][j] << " ";
            	       
		}
         	
		cout << "\n";
          	  
	}
        	
	       
	for (i = 0; i < 3; i++)
	{
			
		for (j = 0; j < 3; j++) 
		{
       
			if (i > j)
			{
				
				total = total + arr[i][j];
         	
			}
      	}	
 
    }
  
  
    cout << "\n" << "Lower triangle total is : " << total;
   
	return 0;

}

