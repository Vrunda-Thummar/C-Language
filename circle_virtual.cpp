#include<iostream>
using namespace std;

class Area
{
    public:
    
    virtual void print()
    {
        cout << "area of shapes";
    }
};

class circle : public Area
{
    public:

        int r;

        void print() override
        {           
            
            cout << "Enter a value : ";
        
            cin >> r;

            cout << 3.14 * r * r << endl;
        }

};

class rectangle : public Area
{
    public:

        int l, h;

        void print() override
        {
        
            cout << "Enter a value : ";
            
            cin >> l >> h;

            cout << l * h << endl;
        
        }     
};

int main()
{
    Area* a1;

    circle mycircle;
    rectangle myrectangle;

    a1 = &mycircle;
    a1->print();

    a1 = &myrectangle;
    a1->print();

}
