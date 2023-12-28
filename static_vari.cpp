// static variable

#include<iostream>
using namespace std;

class car
{
    
    public:

        //declaring a static member

        static int a;
        int i = 0;

    car()
    {
        a++;
    }

    void display()
    {
        cout << "display function call....." << i << endl;
    }

    static void Display()
    {
        cout << "static function call..." << endl;
    }
};

int car :: a = 0;

int main()
{
    car c1;
    c1.display();

    car c2;
    c2.display();
    
    car c3;
    c3.Display();

    cout << "no of object call : " << car :: a << endl;
}