#include <iostream>
using namespace std;

int main()
{
	int num,n, max = 0;
	
	cin >> n; //n��

	for (int i = 0; i < n;i++) //n�� �ݺ�
	{
		cin >> num;
		if (num > max)
			max = num;
	}
	cout << max; //n���� �������� ���� ū ��

	return 0;
}