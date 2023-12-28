#include<iostream>
using namespace std;

class triangle
{
private:
    int base, height;

public:
    int b = base , h = height;

    int area(int b, int h)
    {
        return 0.5*b*h;
    }
    int circ(int b, int h)
    {
        return 3*b;
    }
    
};

int main()
{
    int a,b;
    cin >> a >> b;

    triangle r1;

    cout << r1.area(a,b);
    cout << r1.circ(a,b);

    return 0;
}
