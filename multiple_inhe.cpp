//multiple inheritance

#include<iostream>
using namespace std;

class Base1
{
    
    protected:

        int a;

    public:

        void setA()
        {
            cout << "Enter A : ";
            cin >> a;
        }  

};

class Base2
{
    
    protected:

        int b;

    public:

        void setB()
        {
            cout << "Enter B : ";
            cin >> b;
        }

};

class Derived : public Base1, public Base2
{

    public:

        void product()
        {
            cout << "product of A and B is : " << a * b << endl;
        }

};

int main()
{

    Derived d;

    d.setA();
    d.setB();
    d.product();

}

// cube of up to given number