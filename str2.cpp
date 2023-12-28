#include<iostream>
using namespace std;

int main()
{

	char str[10], v[10];
	int i, n, a = 0;

	cout << "Enter str value :";
    cin >> str;

	for(a = 0; str[a] != '\0'; a++);

	n = a - 1;

	for(i = 0; i < a; i++)
	{

		v[i]=str[n];

		n--;

	}

	cout << "\n" << "string after reverse : " << v;

	return 0;

}