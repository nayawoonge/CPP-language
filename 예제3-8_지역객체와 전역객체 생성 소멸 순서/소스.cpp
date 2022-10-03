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
	cout << "������ " << radius << " �� ����" << endl;
}
Circle::~Circle()
{
	cout << "������ " << radius << " �� �Ҹ�" << endl;
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
	function(); //�Լ� ������ 6�Ҹ� 5 �Ҹ� �� 7����
	Circle main3(7); //���� ������ 7�Ҹ� 4�Ҹ� 3�Ҹ� �ϰ� ������ü �Ҹ�
}