//this pointer
// this ->

#include<iostream>
using namespace std;

class cookie
{
    public:
    int suger;

    cookie(int suger)
    {
        this -> suger = suger;
    }

    void describe()
    {
        cout << "Suger in cookie is : " << suger << endl;
    }
};

int main()
{
    cookie Chocochips(15);
    cookie Outchookie(10);

    Chocochips.describe();
    Outchookie.describe();

}