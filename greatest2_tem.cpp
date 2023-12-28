//Write a program that return greatest value among three variables using template. (it must work with different datatypes)

#include<iostream>
using namespace std;

template <class t>
t sum(t v, t a, t b)
{
    
   if(v >= a)  
    {
                
        if(v >= b)
        {
            
            return v; 
        
        } 
        else
        {
                       
            return b;

        }
    
    }
        
    else if(a >= b)
    {
                
        return a;  
    
    }
    
    else  
    {
        
        return b;
    
    }

    
}

int main()
{
    
    int v, a, b;

    cout << "Enter a Value : " ;
    cin >> v;

    cout << "\nEnter a Value : " ;
    cin >> a;

    cout << "\nEnter a Value : " ;
    cin >> b;
        
    cout << "\nGreatest value is : " << sum(v,a,b);

}
