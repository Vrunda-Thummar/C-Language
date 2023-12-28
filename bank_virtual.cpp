#include<iostream>
using namespace std;

class bank
{
    
    public:
    
        virtual void print()
        {
        
            cout << "bank details";
    
        }

};

class deposite : public bank
{
    public:
        
        int bal, amt;

        void print() override
        {
            cout << "Enter amt : ";
           
            cin >> amt;

            cout << "deposite is : " << bal + amt << endl;
           
            bal+=amt;
        
        }
};

class withdrawl : public bank
{
    public:
        
        int bal, reqamt, amt;

    void print() override
        {
            cout << "Enter amt : ";
           
            cin >> amt;

            if(bal < reqamt)
            {
               
                cout << "error"; 
            
            }
            else
            {
                
                bal -= reqamt;
                
                cout << bal;
            
            }
       
        }
};

int main()
{
    bank* b1;

    deposite d1;
    withdrawl w1;

    b1 = &d1;
    b1->print();

    b1 = &w1;
    b1->print();

}