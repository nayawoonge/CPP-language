#include <iostream>
using namespace std;

int main()
{
	int num,n, max = 0;
	
	cin >> n; //n개

	for (int i = 0; i < n;i++) //n번 반복
	{
		cin >> num;
		if (num > max)
			max = num;
	}
	cout << max; //n개의 정수들중 가장 큰 값

	return 0;
}