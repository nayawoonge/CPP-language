#include <iostream>
using namespace std;

int main()
{
	int *p = new int[5]; // int�� 5�� ���� �迭 p
	if (!p) //p==NULL �޸��Ҵ������ �ȿ� ������ �� ���־ NULL �ƴ�
		cout << "�޸� �Ҵ��� �� �����ϴ�." << endl;
	
	for (int i = 0; i < 5;i++)
		cin >> p[i];
	int max = p[0];
	for (int i = 1; i < 5;i++)
	{
		if (p[i] >= max)
			max = p[i];
	}
	cout << max;
	delete [] p; //�迭 ��ȯ
}