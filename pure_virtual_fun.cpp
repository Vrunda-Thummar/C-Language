// pure virtual function

#include <iostream>
using namespace std;

class Base 
{
    public:
	
	    virtual void show() = 0;  // pure virtual function
};

class Derived : public Base 
{
    public:
	
	    void show()    // implementation of the pure virtual function
        { 
        
            cout << "In Derived \n"; 
        
        }
};

int main()
{
	
	Base* bp;

	bp = new Derived();
	bp->show();

	return 0;

}