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
	cout << donut.getArea() << endl; //그냥 객체 멤버접근

	Circle pizza(10);
	Circle* p;
	p = &pizza;
	cout << p->getArea() << endl; //객체 포인터 멤버접근
	cout << (*p).getArea() << endl; //객체 포인터 멤버접근

	Circle round[3]; //객체3개 생성, 모두 기본 생성자호출
	for (int i = 0;i < 3;i++)
		cout << round[i].radius << endl;

	round[0].setradius(5); //객체배열의 멤버에 접근
	round[1].setradius(10);
	round[2].setradius(15);

	for (int i = 0;i < 3;i++)
		cout << round[i].radius << endl;

	Circle* p1;
	p1 = round; //배열을 포인터로 받음
	for (int i = 0;i < 3;i++)
	{
		cout << p1->radius << endl; //객체 포인터 배열 멤버에 접근
		p1++; //다음 배열을 가르킴
	}
}