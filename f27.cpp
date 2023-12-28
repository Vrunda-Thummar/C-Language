#include <iostream>
using namespace std;
   
int total = 0, math, phy, chem;
float per;

void m1()
{
    cout << "Enter your marks: ";
    cin >> math;

    cout << "Enter your marks: ";
    cin >> phy;

    cout << "Enter your marks: ";
    cin >> chem;

}

float m2()
{
    

    if (math < 35 || phy < 35 || chem < 35)    
    {
        cout << "Student is fail.";
    }
    else
    {
        total = math + phy + chem;
        
        per = total * 100 / 300;
        
    }
}
void m3()
{
    cout << "\n" << "Total marks : " << total << "\n";
    cout << "Percentage is : " << per ;

}

int main()
{
    m1();    
    m2();
    m3();

}