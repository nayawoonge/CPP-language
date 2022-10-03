#include <iostream>
using namespace std;

class MyVector
{
	int* p;
	int size;
public:
	MyVector(int n = 100) //생성자 함수 중복
	{
		p = new int [n];
		size = n;
	}
	/* 위임생성자로 가능
	MyVector() : MyVector(100)
	MyVector(int n)
	{
		p = new int [n];
		size = n;
	}
	*/

	~MyVector()
	{
		delete[] p;
	}
};

int main()
{
	MyVector* v1, * v2;
	v1 = new MyVector(); //100인 메모리 할당
	v2 = new MyVector(1024); //1024인 메모리 할당

	delete v1;
	delete v2;

}