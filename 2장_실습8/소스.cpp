#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[100];
	int count=0;
	char max[100];

	for (int i = 0; i < 5;i++)
	{
		cin.getline(name, 100, ';');
		
		if (strlen(name) > count)
		{
			count = strlen(name);
			strcpy_s(max, name); //strcpy
		}
		cout << i+1 << " : " << name << endl;
	}
	cout << "가장 긴 이름은 " << max;

}