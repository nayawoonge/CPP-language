#include <iostream>
using namespace std;

class Sample
{
	int a;
public:
	Sample() { a = 100; cout << a << ' '; }
	Sample(int x) { a = x; cout << a << ' '; }
	Sample(int x, int y) { a = x * y; cout << a << ' '; }
	int get() { return a; }
};

int main()
{
	Sample arr[3]; // 초기화안하면 기본생성자호출 arr에는 다 Sample()이 호출됨
	Sample arr2D[2][2] = { {Sample(2,3), Sample(2,4)}, {Sample(5), Sample()} };

	Sample* p;
	p = arr; //arr은 배열 = 이미 주소 &안붙여도됨
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < 3; i++)
	{
		sum1 = sum1 + (p++)->get(); //포인터 p를 증가해서 배열 인덱스를 바꿈
	}

	for (int i = 0; i < 2;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			sum2 += arr2D[i][j].get(); //클래스 arr2D의 멤버함수 get() 호출
		}
	}
	cout << endl << sum1 << endl << sum2;
}