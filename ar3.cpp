#include <iostream>
using namespace std;

int  main()
{

    int i, odd = 0, even = 0, a[10];

    for(i = 0; i < 10; i++)
	{	
		
        cout << "Enter value of arr : " ;
		cin >> a[i];
	
    }
	
    for (i = 0; i < 10; i++)
    {

        if (i % 2 == 0)
        {
            even = even + a[i];
        }
        else
        {
            odd = odd + a[i];
        } 

    }

    cout << "\n" << "Sum of all odd numbers  : " << odd << "\n";

    cout << "Sum of all even numbers : " << even;

    return 0;

}