#include <iostream>
using namespace std;

class point
{
	int x, y;
public:
	point();
	point(int a, int b);

	void show()
	{
		cout << "x = " << x << " y = " << y << endl;
	}
};

point::point() :point(0, 0) {}
point::point(int a, int b)
	: x(a), y(b) {}

int main()
{
	point a;
	a.show();
	point b(10,10);
	b.show();


}