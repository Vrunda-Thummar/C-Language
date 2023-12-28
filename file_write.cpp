#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str;
    
    ofstream file("F:/vrunda/VS CODE/vrunda/vr.txt",ios::app);
    if(file.is_open())
    {
        
        file << "vrunda" << endl;
        file << "thummar" << endl;
        
        
        file.close();
    }

    return 0;
}