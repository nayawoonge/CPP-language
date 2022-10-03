#include <iostream>

using std::cin;

int main()
{
	char name[100];
	cin.getline(name, 100, '\n'); //배열 name, 배열크기 100, \n까지 받음
	std::cout << name;
}