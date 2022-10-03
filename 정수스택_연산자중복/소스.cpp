#include <iostream>
using namespace std;

class Stack 
{
	int size;
	int* mem;
	int top_of_stack;

public:
	bool is_empty();
	Stack(int s);
	~Stack();
	Stack& push(int k);
	Stack& pop(int& k);

};

Stack::Stack(int s = 5)
{
	this->size = s;
	mem = new int[this->size];
	this->top_of_stack = -1;
}

Stack::~Stack()
{
	delete [] mem;
}

Stack& Stack::push(int k)
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
Stack& Stack::pop(int& k)
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

bool Stack::is_empty()
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
	stack.push(3); // 스택에 한 정수 푸시
	stack.push(4);
	stack.push(5);
	stack.push(6);
	stack.push(7);
	stack.push(8);
	stack.push(10);
	while (true) {
		if (stack.is_empty()) break; // 스택 empty
		stack.pop(x); // 스택의 한 값 팝
		cout << x << ' ';
	}
	cout << endl;
}