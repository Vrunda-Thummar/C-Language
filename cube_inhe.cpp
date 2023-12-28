//cube no of up to given number

#include<iostream>
using namespace std;

class Base1
{
    
    protected:

        int s;

    public:

        void setA()
        {
            
            cout << "Enter value : ";
            cin >> s;
        
        }    

};

class Base2
{
    protected:

        int i, sum;
};

class Derived : public Base1, public Base2
{

    public:

        void getB()
        {
            
            for(i = 1; i <= s; i++)
            {
                
                sum = i * i * i;

                cout << sum << ", ";

            }
        
        }

};

int main()
{
    
    Derived d;

    d.setA();
    d.getB();
    

}