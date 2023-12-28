#include<iostream>
using namespace std;

class student
{
    public:

       int eng, com, sci, total;
       string name;
       float per;

       // constructor:

       student()
       {
            cout << "Enter Your Name : ";
            cin >> name;

            cout << "Enter Your English Marks :";
            cin >> eng;

            cout << "Enter Your Computer Marks :" ;
            cin >> com;

            cout << "Enter Your Science Marks :" ;
            cin >> sci;

            total = eng + com + sci;
            cout << "Total is : " << total << endl;
        
            per = total * 100 / 300;
            cout << "Per is : " << per << "%" << endl;
            
        }

       // Destructor:

       ~student()
       {
            
            cout << name << " is destructed.";

       }
};

int main()
{
    
    student s1,s2,s3,s4,s5;

    return 0;
}