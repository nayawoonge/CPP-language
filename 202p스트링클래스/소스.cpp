#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a("Hello C++");
	cout << a.length() << endl; //length() ���ڿ� ����
	a.append("!!"); // append() ���ڿ��� ���� �߰�
	cout << a << endl;
	cout << a.at(6) << endl; // at() Ư�� ��ġ�� �ִ� ���ڸ� ����
	cout << a.find("C") << endl; // find() Ư�� ���ڳ� ���ڿ��� �߰��ϸ� ù ��° �ε����� ����
	int n = a.find("+++"); //������ -1 ����
	cout << n << endl;
	a.erase(1, 3); // erase()���ڿ� �Ϻκ� ���� �ε��� 1���� 3�� ���� ����, �ε����� 0���ͽ��� 
	cout << a << endl;
}