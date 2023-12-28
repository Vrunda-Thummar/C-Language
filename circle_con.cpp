#include<iostream>
using namespace std;

class circle
{

    public:
       int radius;

        circle(int r)
        {
              r = radius;           
        
        }

        void area(int r)
        {
            cout << 3.14 * r * r;
        }

        void circ(int r)
        {
            cout << 2 * 3.14 * r;
        }

};


int main()
{
    
    int a;
    cin >> a;

    circle c1(a);
    
    c1.area(a);

    cout << "\n";
    
    c1.circ(a);
  

    return 0;
}