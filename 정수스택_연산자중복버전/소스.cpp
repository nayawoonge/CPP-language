#include <iostream>
using namespace std;

class Stack
{
	int size;
	int* mem;
	int top_of_stack;

public:
	bool operator!();
	Stack(int s);
	~Stack();
	Stack& operator<<(int k);
	Stack& operator>>(int& k);

};

Stack::Stack(int s = 5)
{
	this->size = s;
	mem = new int[this->size];
	this->top_of_stack = -1;
}

Stack::~Stack()
{
	delete[] mem;
}

Stack& Stack::operator<<(int k)
{
	if (this->top_of_stack >= (this->size) - 1)
	{
		cout << "Stack is Full" << endl;
		return *this;
	}
	else
	{
		this->top_of_stack++;
		this->mem[this->top_of_stack] = k;
		return *this;
	}

}
Stack& Stack::operator>>(int& k)
{
	if (this->top_of_stack == -1)
	{
		cout << "Stack is Empty" << endl;
		return *this;
	}
	else
	{
		k = mem[this->top_of_stack];
		top_of_stack--;
		return *this;
	}
}

bool Stack::operator!()
{
	if (this->top_of_stack == -1)
		return true;
	else
		return false;
}

int main(void) 
{
	cout << "2019250061 황지웅" << endl;
	int x;
	Stack stack;
	stack << 3 << 4 << 5 << 6 << 7 << 8 << 10; // 스택에 한 정수 푸시
	while (true) {
		if (!stack) break; // 스택 empty
		stack >> x; // 스택의 한 값 팝
		cout << x << ' ';
	}
	cout << endl;
}