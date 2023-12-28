#include<iostream>
using namespace std;

void f(int marks)
{
    int total = 0, math, eng, guj, sci;
    float per;



    if (math < 35 || eng < 35 || guj < 35 || sci < 35)    
    {
        cout << "Student is fail.";
    }
    else
    {
        total = math + eng + guj + sci;
        cout << "Total marks : " << total << "\n";

        per = total * 100 / 400;
        cout << "Per is : " << per << "\n";
    
        if(per >= 95)
        {
            cout << "Grade A" << "\n";
        }
        else if(per >= 80)
        {
            cout << "Grade B" << "\n";
        }
        else if(per >= 60)
        {
            cout << "Grade C" << "\n";
        }
        else if(per >= 40)
        {
            cout << "Grade D" << "\n";
        }
    }
}

int main()
{
    int mat, eng, guj, sci, marks;

    cout << "Enter maths marks: ";
    cin >> mat;

    cout << "Enter english marks: ";
    cin >> eng;

    cout << "Enter gujarati marks: ";
    cin >> guj;

    cout << "Enter science marks: ";
    cin >> sci;

    f(marks);

   return 0;
}

