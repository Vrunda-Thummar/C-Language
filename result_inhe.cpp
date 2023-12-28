//student result

#include<iostream>
using namespace std;

class Base
{
    protected:

       int eng, com, sci, total;
       string name;
       float per;

    public:
        
        void setDataA()
        {

            cout << "Enter Your Name : ";
            cin >> name;

            cout << "Enter Your English Marks : ";
            cin >> eng;

            cout << "Enter Your Computer Marks : " ;
            cin >> com;

            cout << "Enter Your Science Marks : " ;
            cin >> sci;  
        
        } 
};

class Derived : public Base
{
    public:

        void getData()
        {
         
            total = eng + com + sci;
            cout << "Total is : " << total << endl;
        
            per = total * 100 / 300;
            cout << "Per is : " << per << "%" << endl;
        
        } 

};

int main()
{
    Derived d;

    d.setDataA();
    d.getData();
    
}