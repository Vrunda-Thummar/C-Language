#include<iostream>
using namespace std;

int main()
{
    int math, sci, eng, total, per;

    cout << "Enter math marks : ";
    cin >> math;

    cout << "Enter sci marks : ";
    cin >> sci;

    cout << "Enter eng marks : ";
    cin >> eng;    

    total = math + sci + eng;

    per = total * 100 / 300;

    cout << "\n" << "Total is : " << total << "\n";

    cout << "Per is : " << per;

    return 0;
}