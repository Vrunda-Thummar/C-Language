#include<iostream>
using namespace std;

class circle
{
    private:

         int radius ;

    public:

          int r = radius;

          int area(int r)
          {
            return 3.14 * r * r;
          }     

          int circ(int r)
          {
            return 2 * 3.14 * r;
          }
};

int main()
{
    int a;
    cin >> a ;

    circle c1;

    cout << c1.area(a) << "\n";
    cout <<c1.circ(a);

    return 0;
}