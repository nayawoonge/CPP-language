#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
};

Circle::Circle() : Circle(1) {}
Circle::Circle(int r)
{
	radius = r;
	cout << "¹ÝÁö¸§ " << radius << " ¿ø »ý¼º" << endl;
}
Circle::~Circle()
{
	cout << "¹ÝÁö¸§ " << radius << " ¿ø ¼Ò¸ê" << endl;
}

Circle global1;
Circle global2(2);

void function()
{
	Circle part1(5);
	Circle part2(6);
}

int main()
{
	Circle main1(3);
	Circle main2(4);
	function(); //ÇÔ¼ö ³¡³ª¸é 6¼Ò¸ê 5 ¼Ò¸ê ÈÄ 7»ý¼º
	Circle main3(7); //¸ÞÀÎ ³¡³ª¸é 7¼Ò¸ê 4¼Ò¸ê 3¼Ò¸ê ÇÏ°í Àü¿ª°´Ã¼ ¼Ò¸ê
}