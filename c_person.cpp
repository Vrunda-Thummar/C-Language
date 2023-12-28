#include<iostream>
using namespace std;

class person
{
    private:
       int age;
       string name, city;

    public:

    //setter:

       void setname(string n)
       {
            name = n;
       }
       void setcity(string c)
       {
            city = c;
       }
       void setage(int a)
       {
            age = a;
       }

     //getter:

       void getname()
       {
            cout << "Your Name : " << name << endl;
       }
       void getcity()
       {
            cout << "Your City : " << city << endl;
       }
       void getage()
       {
            cout << "Your Age : " << age;
       }

};

int main()
{
    int a[2], i;
    string b[2], c[2];

    for(i = 0; i <= 1; i++)
    {
         
          cout << "Enter Your Name : ";
          cin >> b[i];

          cout << "Enter Your City : ";
          cin >> c[i];

          cout << "Enter Your Age : ";
          cin >> a[i];

          cout << "\n";

    }
    person p1;

    p1.setage(a[0]);
    p1.setname(b[0]);
    p1.setcity(c[0]);

    p1.getname();
    p1.getcity();
    p1.getage();

    cout << "\n";

    person p2;
    p2.setage(a[1]);
    p2.setname(b[1]);
    p2.setcity(c[1]);

    p2.getname();
    p2.getcity();
    p2.getage();
    

    return 0;
}