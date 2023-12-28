#include <iostream>
using namespace std;

class student
{
    private:
    
        int eng, com, sci, guj, total;
        string name;
        float per;

    public:

    // setter:

    void setname(string n)
    {
        
         name = n;
    
    }
    void setmarks(int e, int c, int s, int g)
    {
        
        eng = e, com = c, sci = s, guj = g;
    
    }
    int totalmarks(int e, int c, int s, int g)
    {
        
        total = e + c + s + g;
        
        return total;
    
    }

    int percentage(int total)
    {
        
        per = total * 100 / 400;
        
        return per;
    
    }
   
    // getter:

    void getname()
    {
        
        cout << "Student name : " << name << endl;
    
    }
    void getmarks()
    {
       
        cout << "Eng : " << eng << "\n" << "Com : " << com << "\n" << "Sci : " << sci << "\n" << "Guj : " << guj << endl;
    
    }
};

int main()
{
    int e[5], c[5], s[5], g[5], i, t[5];
    string n[5];
    float p[5];

    for (i = 0; i <= 4; i++)
    {

        cout << "Name :";
        cin >> n[i];

        cout << "English :";
        cin >> e[i];

        cout << "Computer :";
        cin >> c[i];

        cout << "Science :";
        cin >> s[i];

        cout << "Gujarati :";
        cin >> g[i];
        
     }

    cout << "\n" << "student 1" << "\n";

    student s1;

    s1.setname(n[0]);
    s1.setmarks(e[0], c[0], s[0], g[0]);

    s1.getname();
    s1.getmarks();

    cout << "\n" << "student 2" << "\n";

    student s2;
    
    s2.setname(n[1]);
    s2.setmarks(e[1], c[1], s[1], g[1]);

    s2.getname();
    s2.getmarks();

    cout << "\n" << "student 3" << "\n";

    student s3;

    s1.setname(n[2]);
    s1.setmarks(e[2], c[2], s[2], g[2]);

    s1.getname();
    s1.getmarks();

    cout << "\n" << "student 4" << "\n";

    student s4;
    
    s2.setname(n[3]);
    s2.setmarks(e[3], c[3], s[3],g[3]);

    s2.getname();
    s2.getmarks();

    cout << "\n" << "student 5" << "\n";

    student s5;
    
    s2.setname(n[4]);
    s2.setmarks(e[4], c[4], s[4],g[4]);

    s2.getname();
    s2.getmarks();

    
    cout << "\n";

    for (i = 0; i <= 4; i++)
    {

        t[i] = s1.totalmarks(e[i], c[i], s[i], g[i]);
        cout << "Total : " << t[i] << endl;
        
        p[i] = s1.percentage(t[i]);
        cout << "Per : " << p[i] << "%" << endl;
    
    }
   
    return 0;
}
