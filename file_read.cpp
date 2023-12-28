#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str;
    
    ifstream file("F:/vrunda/VS CODE/vrunda/1TON.cpp");
    if(file.is_open())
    {
        
        while(getline(file,str))
        {
        
            cout<<str<<endl;
        
        }
        
        file.close();
    }

    return 0;
}