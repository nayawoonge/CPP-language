#include <iostream>
#include <cstring> //strcpy(),strcmp(),strlen() �� �Լ� ���� ���
using namespace std;

int main()
{
	char password[11];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while (true)
	{
		cout << "��ȣ>>";
		cin >> password;
		if (strcmp(password, "C++") == 0) //�� ���ڿ� �� ������ 0,���ڿ�1�� �� ũ�� 1, �������� -1
		{
			cout << "���α׷� ����" << endl;
			break;
		}
		else
			cout << "��ȣƲ��" << endl;
	}
}