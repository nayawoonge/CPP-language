#include <iostream>

using std::cin;

int main()
{
	char name[100];
	cin.getline(name, 100, '\n'); //�迭 name, �迭ũ�� 100, \n���� ����
	std::cout << name;
}