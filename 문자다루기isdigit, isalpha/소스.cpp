#include <iostream>
#include <locale>
#include <string>
using namespace std;


int main()
{
	string a = "Hello";
	for (int i = 0; i < a.length();i++)
	{
		a[i] = toupper(a[i]);
	}
	cout << a << endl;
	
	if (isdigit(a[0]))
		cout << "����" << endl;
	else if (isalpha(a.at(0)))
		cout << "����" << endl;
}
