#include<iostream>
using namespace std;

class solid
{
    private:
      int radius, base, height, length;

    public:
        int r = radius;

        solid()
        {
            int r;
            r = radius;
        } 

        void area(int r)
        {
            cout << 4 * 3.14 * r * r << endl;
        }

        solid(int b, int h, int l)
        {
            b = base;
            h = height;
            l = length;
        }
        void area(int b, int h, int l)
        {
            cout << 12 * b * h * l;
        }

};

int main()
{

    solid s1;
    s1.area(5);
    s1.area(5, 5, 5);

    return 0;
}