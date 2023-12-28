// using friend function operator overloading

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

        friend Box operator+(Box v, Box r)
        {
            Box t;

            t.l = r.l + v.l;
            t.w = r.w + v.w;
            t.h = r.h + v.h;

            return t;
        }

        friend Box operator++(Box a)
        {
            Box b;

            b.l = ++a.l;
            b.w = ++a.w;
            b.h = ++a.h;

            return b;
        }

        friend Box operator--(Box c)
        {
            Box d;

            d.l = --c.l;
            d.w = --c.w;
            d.h = --c.h;

            return d;
        }

};

int main()
{

    Box b1, b2, b3, b4, b5;

    b1.setdata(2, 2, 2);
    cout << "Volume of box B1 is : " << b1.getvolume() << endl;

    b2.setdata(3, 3, 3);
    cout << "Volume of box B2 is : " << b2.getvolume() << endl;

    b3 = b1 + b2; // 5, 5, 5
    cout << "Volume of box B3 is : " << b3.getvolume() << endl;

    b4 = ++b3;
    cout << "Volume of box B4 is : " << b4.getvolume() << endl;

    b5 = --b3;
    cout << "Volume of box B5 is : " << b5.getvolume() << endl;

    return 0;

}