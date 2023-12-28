// Operator overloding

#include<iostream>
using namespace std;

class Box
{
    int l, w, h;

    public:

        void setdata(int a, int b, int c)
        {

            l = a;
            w = b;
            h = c;

        }

        int getvolume()
        {

            return l * w * h;

        }

        Box operator+(Box &v)
        {
            Box t;

            t.l = l + v.l;
            t.w = w + v.w;
            t.h = h + v.h;

            return t;
        }

        Box operator*(Box &a)
        {
            Box b;

            b.l = l * a.l;
            b.w = w * a.w;
            b.h = h * a.h;

            return b;
        }

        Box operator/(Box &c)
        {
            Box d;

            d.l = l / c.l;
            d.w = w / c.w;
            d.h = h / c.h;

            return d;
        }

};

int main()
{

    Box b1, b2, b3, b4;

    b1.setdata(2, 2, 2);
    cout << "Volume of box B1 is : " << b1.getvolume() << endl;

    b2.setdata(3, 3, 3);
    cout << "Volume of box B2 is : " << b2.getvolume() << endl;

    b3 = b1 + b2; // 5, 5, 5
    cout << "Volume of box B3 is : " << b3.getvolume() << endl;

    b4 = b3 * b1; // 10, 10, 10
    cout << "Volume of box B4 is : " << b4.getvolume() << endl;

    return 0;
}