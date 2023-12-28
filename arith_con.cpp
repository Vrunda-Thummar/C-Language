#include<iostream>
using namespace std;

class arith
{
    public:

        int a, b;

        arith()
        {
            cin >> a >> b;

            cout << a + b << endl;
            
        }
        
        arith(int a, int b)
        {
            int d;

            d = a / b;

            cout << d << endl;
        
        }

        void t1()
        {
            int total;  
            
            total = a * b;
            
            cout << total << endl;
         
        }
    
        void func1()
        {
            
            cout << "Hello" << endl;
        
        }

        void func2(int a, int b)
        {
            
            cout << a - b;
        
        }

};


int main()
{ 
    

    arith a1;
    arith a2(10,20);
    a1.t1();
    a1.func1();
    a1.func2(10,20);

    return 0;

}