#include <iostream>
using namespace std;
int a;
void f(int a)
{
	a = -a;
}
void g(int *a)
{
	*a = -*a;
}
void h(int& a)
{
	a = -a;
}

int main()
{
	int n = 5;
	f(n);
	cout << n << endl;
	n = 5;
	g(&n);
	cout << n << endl;
	n = 5;
	h(n);
	cout << n << endl;

}