#include <iostream>
using namespace std;

void m1()
{
    int math, phy, chem, total;

    cout << "Enter your marks: ";
    cin >> math;

    cout << "Enter your marks: ";
    cin >> phy;

    cout << "Enter your marks: ";
    cin >> chem;
 
    total = math + phy + chem;

    cout << "\n" << "Total marks : " << total;

}

int m2(float per)
{
    
    int total;
    
    per = total * 100 /300;

    cout << "\n" << "Per : " << per;

    return 0;

}


int main()
{
    int total;

    m1();    
    m2(total);

    return 0;
}