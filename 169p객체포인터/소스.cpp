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
	Sample arr[3]; // �ʱ�ȭ���ϸ� �⺻������ȣ�� arr���� �� Sample()�� ȣ���
	Sample arr2D[2][2] = { {Sample(2,3), Sample(2,4)}, {Sample(5), Sample()} };

	Sample* p;
	p = arr; //arr�� �迭 = �̹� �ּ� &�Ⱥٿ�����
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < 3; i++)
	{
		sum1 = sum1 + (p++)->get(); //������ p�� �����ؼ� �迭 �ε����� �ٲ�
	}

	for (int i = 0; i < 2;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			sum2 += arr2D[i][j].get(); //Ŭ���� arr2D�� ����Լ� get() ȣ��
		}
	}
	cout << endl << sum1 << endl << sum2;
}