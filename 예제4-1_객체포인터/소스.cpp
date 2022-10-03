#include <iostream>
using namespace std;

class Circle
{
	
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();

	void setradius(int r);
};

Circle::Circle() :Circle(1) {}
Circle::Circle(int r)
{
	radius = r;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}
void Circle::setradius(int r)
{
	radius = r;
}

int main()
{
	Circle donut(2);
	cout << donut.getArea() << endl; //�׳� ��ü �������

	Circle pizza(10);
	Circle* p;
	p = &pizza;
	cout << p->getArea() << endl; //��ü ������ �������
	cout << (*p).getArea() << endl; //��ü ������ �������

	Circle round[3]; //��ü3�� ����, ��� �⺻ ������ȣ��
	for (int i = 0;i < 3;i++)
		cout << round[i].radius << endl;

	round[0].setradius(5); //��ü�迭�� ����� ����
	round[1].setradius(10);
	round[2].setradius(15);

	for (int i = 0;i < 3;i++)
		cout << round[i].radius << endl;

	Circle* p1;
	p1 = round; //�迭�� �����ͷ� ����
	for (int i = 0;i < 3;i++)
	{
		cout << p1->radius << endl; //��ü ������ �迭 ����� ����
		p1++; //���� �迭�� ����Ŵ
	}
}