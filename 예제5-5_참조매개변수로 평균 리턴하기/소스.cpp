#include <iostream>

using namespace std;

bool average(int a[], int size, int& refcavg)
{
	if (size <= 0)
		return false;
	int sum = 0;
	for (int i = 0;i < size;i++)
		sum += a[i];
	refcavg = sum / size;

	return true;
}

int main()
{
	int x[] = { 1,2,3,4,5 };
	int avg;

	if (average(x, 5, avg))
		cout << avg << endl;
}