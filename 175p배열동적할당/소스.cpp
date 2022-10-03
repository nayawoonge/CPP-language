#include <iostream>
using namespace std;

int main()
{
	int *p = new int[5]; // int형 5개 받은 배열 p
	if (!p) //p==NULL 메모리할당받으면 안에 임의의 값 들어가있어서 NULL 아님
		cout << "메모리 할당할 수 없습니다." << endl;
	
	for (int i = 0; i < 5;i++)
		cin >> p[i];
	int max = p[0];
	for (int i = 1; i < 5;i++)
	{
		if (p[i] >= max)
			max = p[i];
	}
	cout << max;
	delete [] p; //배열 반환
}