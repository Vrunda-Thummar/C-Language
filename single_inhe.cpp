//single inheritance

#include<iostream>
using namespace std;

class Base
{
    protected:

        int a;

    public:

        void setDataA()
        {
        
            cout << "Enter a : ";
            cin >> a;

        }

};

class Derived : public Base
{
    
    int b;

    public:

        void setDataB()
        {
        
            cout << "Enter b : ";
            cin >> b;

        }

        void Getter()
        {
        
            cout << "Addition of a and b is : " << a + b << endl;
    
        }

};

int main()
{
    
    Derived d;

    d.setDataA();
    d.setDataB();
    d.Getter();
    
}