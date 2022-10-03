#include <iostream>
#include <cstring> //strcpy(),strcmp(),strlen() 등 함수 포함 헤더
using namespace std;

int main()
{
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while (true)
	{
		cout << "암호>>";
		cin >> password;
		if (strcmp(password, "C++") == 0) //두 문자열 비교 같으면 0,문자열1이 더 크면 1, 더작으면 -1
		{
			cout << "프로그램 종료" << endl;
			break;
		}
		else
			cout << "암호틀림" << endl;
	}
}