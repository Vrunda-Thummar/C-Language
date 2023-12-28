//square no of up to given number

#include<iostream>
using namespace std;

class Base
{
    
    protected:

        int s;

    public:

        void setData()
        {
            
            cout << "Enter value : ";
            cin >> s;
        
        }    

};

class Derived : public Base
{
    private:

        int i, sum;

    public:

        void getData()
        {
            
            for(i = 1; i <= s; i++)
            {
                
                sum = i * i;

                cout << sum << ", ";

            }
        
        }

};

int main()
{
    
    Derived d;

    d.setData();
    d.getData();

}