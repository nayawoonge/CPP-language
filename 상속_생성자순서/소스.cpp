#include <iostream>
using namespace std;

class A
{
	int x;
public:
	A() { x = 0; }
	A(int x) { this->x = x; cout << "x" << x << endl; }
};
class B : public A
{
	int y;
public:
	B(int x, int y) : A(x + 5) { this->y = y; cout << "y" << y << endl; }
};
class C :public B
{
	int m;
public:
	C(int x, int y, int z) : B(x, y) { m = x * y * z; cout << "m" << m << endl; }
};

int main()
{
	C c(3, 5, 2);

	return 0;
}