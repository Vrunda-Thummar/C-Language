#include <iostream>
#include<string>
using namespace std;

class bill
{
     private:
          
          string name, num ;
          int gst = 0, netbill = 0, billamt = 0;
          int bill = 0, qty, v;
          string item[3];
          

     public:
    
          void information()
          {
               
               cout << "\n-------------------------------------------------------------" << endl;

               cout << "\n                        Customer Information                    " << endl;

               cout << "\n\t Customer Name : " ;
               cin >> name;
          
               cout << "\n\t Customer Mobile Number : " ;
               cin >> num ;

               v = num.size();

               if(v == 10)
               {}
               
               else
               {    
                    
                    cout <<  "\n-------------------------------------------\n";
     
                    cout << "\n\t It is not valid.\n";

               }
    
               cout << "\n-------------------------------------------------------" << endl;

          }

          int item1()
          {
               
               cout << "\nEnter a Qunatity : ";
               cin >> qty;
               
               item[0] = "Oil = 300";
               
               bill = bill + qty * 300;

          }
     
          int item2()
          {
         
               cout << "\nEnter a Qunatity : ";
               cin >> qty;
          
               item[1] = "Milk = 33";
               
               bill = bill + qty * 33;

          }
     
          int item3()
          {
               
               cout << "\nEnter a Qunatity : ";
               cin >> qty;
          
               item[2] = "Butter = 25";
          
               bill = bill + qty * 25;

          }
     
          int Showbillamt()
          {

               return billamt = billamt + bill;

          }
    
          int Showgst()
          {
         
               return gst = (billamt * 18) / 100;
          
          }
    
          int shownetbill()
          {
         
               return netbill = billamt + gst;
         
          }

          void billitems()
          {

               for (int i = 0; i < 3; i++)
               {
               
                    if (!item[i].empty())
                    {
                    
                         cout << "\n\t " << i + 1 << "." << item[i] << endl;
                    
                    }
          
               }
          
          }
     
          void Netbill()
          {
          
               cout << "\n-------------------------------------------------------" << endl;

               cout << "\nTotal Price    : " << Showbillamt() ;
               cout << "\n                                                    " << endl;
         
               cout << "Gst            : " << Showgst();
               cout << "\n                                                    " << endl;
          
               cout << "Total Bill     : " << shownetbill();
               cout << "\n                                                    " << endl;
          
               cout << "                                         " << endl;
               
               cout << "             /--------------/             " << endl;
               
               cout << "            / Visit Again. /             " << endl;
          
               cout << "           /--------------/             " << endl;
          
               cout << "                                     " << endl;
     
          }
     
};

int main()
{
     
     bill a;

     cout << "\n\t  '24Seven Grocery Store' \n" << endl;
     
     cout <<  "-------------------------------------------\n";
     
     cout << "\n\t\tItems List \n" << endl;
     
     cout <<  "-------------------------------------------\n";
     
     cout << "No." << "\tIteam" << "\t\t\t  Rate" << "\n" << "-------------------------------------------\n";
     
     cout << "1. " << "\tOil" << "\t\t\t  300 Rs." << "\n";
     
     cout << "2. " << "\tMilk" << "\t\t\t  33 Rs." << "\n";
     
     cout << "3. " << "\tButter" << "\t\t\t  25 Rs." << "\n";
     

     int item = 0;

     do
     {
          
          cout << "\n      Select Item      " << "\n" << "-----------------------" << "\n" << "\nEnter Item No : ";
          cin >> item;

          switch (item)
          {
          
               case 1:
                    a.item1();
                    break;

               case 2:
                    a.item2();
                    break;

               case 3:
                    a.item3();
                    break;

               case 0:
                    break;

               default:
                    
                    cout << "It Is Not Available.";
          
          }

     } 
     
     while (item != 0);

     a.information();
     a.billitems();
     a.Netbill();
  
}