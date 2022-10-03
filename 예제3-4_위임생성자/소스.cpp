#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle() :Circle(1) {}
	Circle(int r)
	{
		radius = r;
	}
};

int main()
{
	Circle pizza;
	cout << pizza.radius;
}