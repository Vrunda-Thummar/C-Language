//hierarchical inheritance

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
    int b;

    public:
       
        void setB()
        {
            
            cout << "Enter B : ";
            cin >> b;
        
        }

        void Addition()
        {

            cout << "Addition of A and B is : " << a + b << endl;

        }

};

class Derived2 : public Base
{
    int c;

    public:

        void setc()
        {

            cout << "Enter B : ";
            cin >> c;

        }

        void Product()
        {

            cout << "Product of A and B is : " << a * c << endl;

        }

};

int main()
{
    Derived1 d1;

    d1.setA();
    d1.setB();
    d1.Addition();

    Derived2 d2;

    d2.setA();
    d2.setc();
    d2.Product();

}

//factorial no & table