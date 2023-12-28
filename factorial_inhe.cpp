#include<iostream>
using namespace std;

class Base
{
    protected:

        int a;

    public:

        void setA()
        {
            
            cout << "Enter a value : ";
            cin >> a;

        }    

};

class Derived1 : public Base
{
    protected:
        
        int i, n = 1;

    public:

        void setB()
        {
            for(i = 1; i <= a; i++)
            {
                
                n = n * i;

            }

        }    

        void addition()
        {

            cout << "Factorial num is : " << n ;

        }

};

class Derived2 : public Base
{
    protected:

        int b, i;

    public:

        void product()
        {
            for(i = 1; i < a; i++)
            {
                cout << a << "x" ;
            }
        }
};

 

int main()
{
    
    Derived1 d1;

    d1.setA();
    d1.setB();
    d1.addition();
    
}



