//���� �����Լ��� �� �۵��ϵ��� 
//RectangleŬ����, width�� height ��� ������ 3���� ������, isSquare()�Լ� �����
//������ rect1�� ���簢���̴�. \n rect3�� ���簢���̴�. ���
/*
int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSqiare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare(() cout << "rect3�� ���簢���̴�." << endl;
}
*/
#include <iostream>
using namespace std;

class Rectangle 
{
	int width, height;
public:
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int wh);
	
	bool isSquare();
};

Rectangle::Rectangle() : Rectangle(1) {}
Rectangle::Rectangle(int w, int h)
{
	width = w;
	height = h;
}
Rectangle::Rectangle(int wh)
{
	width = height = wh;
}

bool Rectangle::isSquare()
{
	if (width == height) return true;
	else return false;
}
int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}