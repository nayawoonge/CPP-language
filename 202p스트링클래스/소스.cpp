#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a("Hello C++");
	cout << a.length() << endl; //length() 문자열 길이
	a.append("!!"); // append() 문자열에 문자 추가
	cout << a << endl;
	cout << a.at(6) << endl; // at() 특정 위치에 있는 문자를 리턴
	cout << a.find("C") << endl; // find() 특정 문자나 문자열을 발견하면 첫 번째 인덱스를 리턴
	int n = a.find("+++"); //없으면 -1 리턴
	cout << n << endl;
	a.erase(1, 3); // erase()문자열 일부분 삭제 인덱스 1부터 3개 문자 삭제, 인덱스는 0부터시작 
	cout << a << endl;
}