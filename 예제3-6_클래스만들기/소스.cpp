//다음 메인함수가 잘 작동하도록 
//Rectangle클래스, width와 height 멤버 변수와 3개의 생성자, isSquare()함수 만들기
//실행결과 rect1은 정사각형이다. \n rect3는 정사각형이다. 출력
/*
int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSqiare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare(() cout << "rect3는 정사각형이다." << endl;
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

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}