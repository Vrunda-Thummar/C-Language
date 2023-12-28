//using virtual in parent class

#include<iostream>
using namespace std;

class pet
{
    public:
    
    virtual void print()
    {
        cout << "sound of pet";
    }
};

class dog : public pet
{
    public:

    void print() override
    {
        cout << "barks" << endl;
    }
};

class cat : public pet
{
    public:

    void print() override
    {
        cout << "meow" << endl;
    }
};

int main()
{
    pet * mypet;

    dog mydog;
    cat mycat;

    mypet = &mydog;
    mypet->print();

    mypet = &mycat;
    mypet->print();

}