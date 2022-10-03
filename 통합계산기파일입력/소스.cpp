#include <iostream>
#include <fstream>
using namespace std;

ifstream fin;

double temp_fareheit(double celcius);
double temp_celcius(double farenheit);

void title()
{
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;

	cout << "	�� ���α׷��� ���հ��� ���α׷��Դϴ�." << endl
		<< "	���հ���� ������ �� �� �ֽ��ϴ�." << endl
		<< "	1. ������ ��Ģ����" << endl
		<< "	2. ���� <-> ȭ�� �µ� ��ȯ" << endl
		<< "	3. �񸸵� ���" << endl;

	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;

	cout << "�й� : 2019250061	�̸� : Ȳ����" << endl;

	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;

	cout << "	�������α׷��� �ִ� ������ ������������ �غ��� �ּ���!" << endl
		<< '\n'
		<< "	������ ���ϸ��� calc.dat �Դϴ�." << endl;

	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl << '\n';
	cout << "	���������� ������ ������ ������ �����ϴ�." << endl
		<< "	choice (1/2/3)	// 1�̸� 4Ģ����, 2�̸� �µ���ȯ, �׸��� 3�̸� �񸸵� ���" << endl
		<< "	i1, i2, op		// choice�� 1�� ���, i1(ù��° ����), i2(�ι�° ����), op (4Ģ������(+,-,*,/ �� �ϳ�) " << endl
		<< "	degreeMode(1/2)	// choice�� 2�� ���, degreeMode == 1�̸� ����->ȭ��, degreeMode == 2�̸� ȭ��->���� ��ȯ" << endl
		<< "	degree	/// ��ȯ �� �µ�" << endl
		<< "	height, weight	// choice�� 3�� ���, height�� weight�� ���Ϳ� ų�α׷� ������ �Է��Ͻÿ�." << endl;


	for (int i = 0;i < 10;i++)
		cout << "==========";
	cout << endl << '\n';

}

void arithmetic_title()
{
	cout << "======================" << endl
		<< "��Ģ��������Դϴ�." << endl
		<< "======================" << endl
		<< '\n';
}

void arithmetic()
{
	arithmetic_title();
	int firstInteger, secondInteger;
	double result=0;
	char op;  //������
	fin >> firstInteger >> secondInteger >> op;

	if (!fin)
	{
		cout << "	������ �ƴ� ���� �ԷµǾ����ϴ�." << endl;
		return;
	}
	switch (op)
	{
	case '+':
		result = firstInteger + secondInteger;
		break;
	case '-':
		result = firstInteger - secondInteger;
		break;
	case '*':
		result = firstInteger * secondInteger;
		break;
	case '/':
		result = (double)firstInteger / secondInteger;
		break;
	default:
		cout << "	�����ڸ� �߸� �Է��Ͽ����ϴ�." << endl;
		return;
		break;
	}

	cout << "	���Ϸ� �Է��� �� ������ �����ڴ� ������ �����ϴ�. " << endl
		<< "	i1 = " << firstInteger << endl
		<< "	i2 = " << secondInteger << endl
		<< "	op = " << op << endl;

	cout << "	����� " << result << "�Դϴ�." << endl;
}

void temp_title()
{
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;
	cout << "���� <-> ȭ�� �µ� ��ȯ ���α׷��Դϴ�." << endl;
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl << '\n';

}
void temp()
{
	int op; //�ɼ�
	double temperature;

	temp_title();

	fin >> op >> temperature;
	switch (op)
	{
	case 1:
		cout << "	���� �µ� ==> ȭ�� �µ��� ��ȯ�� �����Ͽ����ϴ�." << endl;
		cout << "	���Ϸ� �Է��� ���� �µ� " << temperature << endl;
		cout << '\n';
		cout << "	��ȯ �µ��� " << temp_fareheit(temperature) << " �Դϴ�." << endl;
		break;
	case 2:
		cout << "	ȭ�� �µ� ==> ���� �µ��� ��ȯ�� �����Ͽ����ϴ�." << endl;
		cout << "	���Ϸ� �Է��� ȭ�� �µ� " << temperature << endl;
		cout << '\n';
		cout << "	��ȯ �µ��� " << temp_celcius(temperature) << " �Դϴ�." << endl;
		break;
	}

}

double temp_celcius(double farenheit)
{
	return ((farenheit - 32) * (5.0 / 9.0));
}

double temp_fareheit(double celcius)
{
	return ((9.0 / 5.0) * celcius + 32.0);
}

void bmi_title()
{
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;
	cout << "	�񸸵� ��� ���α׷��Դϴ�." << endl;
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;
	cout << '\n' << '\n' << '\n';

}

void bmi()
{
	bmi_title();
	double weight, height; //������, Ű
	double result; //bmi
	
	fin >> height >> weight;

	cout << "	���Ϸ� �Է��� Ű�� �����Դ� ������ �����ϴ�." << endl;
	cout << "	Ű	: " << height << endl;
	cout << "	������	: " << weight << endl;
	
	result = weight / (height * height);

	cout << '\n'
		<< "	BMI : " << result << " �Դϴ�." << endl;
}

int main()
{
	title();
	
	char choice;
	
	fin.open("calc.dat");
	if (!fin)
	{
		cout << "������������ �����ϴ�.";
		return 0;
	}
	fin >> choice;
	
	

	switch (choice)
	{
	case '1':
		arithmetic();
		break;
	case '2':
		temp();
		break;
	case '3':
		bmi();
		break;
	}
	fin.close();

}