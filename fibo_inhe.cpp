//fibonacci series

#include<iostream>
using namespace std;

class Base1
{
    protected:
        int c;

    public:
        void setA()
        {
            cout << "Enter value : ";
            cin >> c;
     
        }    
};

class Base2 : public Base1
{
    
    protected:
        
        int i, a = 0, b, n = 1;

    public:
      
        void setB()
        {  
       
            // for(i = 2; i <= c; i++)
            // {}
        
        }

};

class Derived : public Base2
{
    public:

    void product()
    {
        for(i = 2; i <= c; i++)
        {
            
            b = a + n;

            cout << b << ", ";

            a = n;
	     
            n = b;
        
        }
        
    }
};

int main()
{
    Derived d;

    d.setA();
    d.setB();
    d.product();

}
