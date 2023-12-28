//hybrid inheritance

#include<iostream>
using namespace std;

class Base
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

class Derived1 : public Base
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

class Derived2
{
    protected:

        int c;

    public:

        void setC()
        {

            cout << "Enter B : ";
            cin >> c;

        }    
};

class Test : public Derived1, public Derived2
{
    public:

        void Product()
        {

            cout << "Product of A, B and C is : " << a * b * c << endl;

        }
};

int main()
{
    Test t;

    t.setA();
    t.setB();
    t.setC();
    t.Product();

}