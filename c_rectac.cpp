#include<iostream>
using namespace std;

class rectangle
{
    private:

         int length, height;

    public:

          int l = length, h = height;

          int area(int l, int n)
          {
            return l * h;
          }     

          int circ(int l, int h)
          {
            return 2 * (l + h);
          }
};

int main()
{
    int a, b;
    cin >> a >> b;

    rectangle r1;

    cout << r1.area(a,b);
    cout <<r1.circ(a,b);

    return 0;
}