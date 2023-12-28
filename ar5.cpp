#include<iostream>
using namespace std;

int main()
{
    
    int arr[10], n, i, sum = 0;
    
    cout << "Enter value : ";
    cin >> n;
    
    cout << "Enter array elements : " << "\n";

    for(i = 0; i < n; i++)
    {    

        cin >> arr[i];

    }          

    for(i = 0; i < n; i++)
    {        

        sum = sum + arr[i]; 

    }

    cout << "\n" <<  "Sum of the array = " << sum << "\n";
    
    return 0;
}