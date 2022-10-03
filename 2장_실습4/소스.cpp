#include <iostream>
using namespace std;

int main()
{
	double num, max;
	for (int i = 0;i < 5;i++)
	{
		cin >> num;
		if (i == 0)
			max = num;
		else
		{
			if (num >= max)
				max = num;
		}
	}
	cout << max;
}