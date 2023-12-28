#include<iostream>
using namespace std;

class bankaccount
{        

    public:

        int amt;

        bankaccount()
        {
           
            cout << "Enter amt : ";
           
            cin >> amt;
            
        }

        void deposite()
        {
            
            int bal = 0;

            cout << "deposite is : " << bal + amt << endl;
           
            bal+=amt;
        
        }
        
        void withdrawel()
        {
            
            int bal = 0, reqamt = 0;
            
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
   
    bankaccount b1;
  
    b1.deposite();
    b1.withdrawel();

    return 0;

}