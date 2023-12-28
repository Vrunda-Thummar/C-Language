#include<iostream>
using namespace std;

class triangle
{

    public:

        int base, height;

        triangle(int b, int h)
        {

            int base = b , height = h;

        }

        ~triangle()
        {

            cout << "destructor";

        }
    
        void area(int b, int h)
        {
    
            cout << 0.5*b*h;
    
        }
        void  circ(int b)
        {
    
            cout << 3*b;
    
        }
    
};

int main()
{
    
    int a,b;
    cin >> a >> b;

    triangle r1(a,b);

    r1.area(a,b);

    cout << "\n";

    r1.circ(a);

    return 0;

}