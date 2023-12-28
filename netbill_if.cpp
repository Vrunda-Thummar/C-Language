#include<iostream>
using namespace std;

int main()
{
    int billamt, gst, netbill;

    cout << "Enter billamt : ";
    cin >> billamt;

    gst = billamt * 0.18;
    cout << "Gst is :" << gst << "\n";

    netbill = gst + billamt;
    cout << "Netbill is : " << netbill;

    return 0;
    
}