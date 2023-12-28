#include<iostream>
using namespace std;

class rectangle
{

    public:

        int length, height;

        rectangle(int l, int h)
        {
           int length = l, height = h;
        }

        void area(int l, int h)
        {
            cout << l * h;
        }     

        void circ(int l, int h)
        {
            cout << 2 * (l + h);
        }
};

int main()
{
    int a, b;
    cin >> a >> b;

    rectangle r1(a,b);

    r1.area(a,b);

    cout << "\n";

    r1.circ(a,b);

    return 0;
}