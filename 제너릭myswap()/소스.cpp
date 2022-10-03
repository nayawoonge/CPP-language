#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(int radius = 1)
	{
		this->radius = radius;
	}
	int getRadius()
	{
		return radius;
	}
};

template <class T>
void myswap(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	Circle a(5), b(10);
	myswap(a, b);
	cout << a.getRadius() << endl;
	cout << b.getRadius() << endl;
}