#include<iostream>
using namespace std;

class bankaccount
{
    private:
        
        int amt;

    public:

        bankaccount()
        {
           
            cout << "Enter amt : ";
           
            cin >> amt;
            
        }

        void deposite(int bal)
        {
            
            cout << "deposite is : " << bal + amt << endl ;
           
            bal+=amt;
        
        }
        
        void withdrawel(int bal, int reqamt)
        {
            
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
  
    b1.deposite(0);
    b1.withdrawel(500,1000);

    return 0;
}