#include <iostream>
using namespace std;

void operating(int n1, int n2, char op);
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

	cout << "	1�� ������ ������ ��Ģ������," << endl 
		<< "	2�� ������ ����ȭ�� �µ� ��ȯ��" << endl 
		<< "	3�� ������ �񸸵� ����� �����ϰ� �˴ϴ�." << endl 
		<< "	q�� ������ ���հ�� ���α׷��� �����ϰ� �˴ϴ�." << endl;

	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;


	cout << '\n' << "	������ �����Ͻðڽ��ϱ�(1 / 2 / 3 / q) ?" << endl;

}

void arithmetic_title()
{
	cout << "======================" << endl
		<< "��Ģ��������Դϴ�." << endl
		<< "======================" << endl
		<< "�� ������ �Է��� ��, �����ڸ� �Է��ϼ���." << endl;
}

void arithmetic()
{
	arithmetic_title();

	double n1=0.0, n2=0.0; //����1, ����2
	char op;  //������
	char num1[100];
	char num2[100];

	bool flag1 = false;
	while (!flag1)
	{
		flag1 = true;
		cout << "ù��° ������ �Է��Ͻÿ� ! ";
		cin >> num1;

		for (int i = 0; num1[i] != '\0';i++)
		{
			if (num1[i] >= 'a' && num1[i] <= 'z')
			{
				flag1 = false;
				break;
			}
		}

	}
	for (int i = 0;num1[i] != '\0';i++)
	{
		n1 *= 10;
		n1 += num1[i] - '0';
	}

	bool flag2 = false;

	while (!flag2)
	{
		flag2 = true;
		cout << "�ι�° ������ �Է��Ͻÿ� ! ";
		cin >> num2;

		for (int i = 0; num2[i] != '\0';i++)
		{
			if (num2[i] >= 'a' && num2[i] <= 'z')
			{
				flag2 = false;
				break;
			}
		}

	}
	for (int i = 0;num2[i] != '\0';i++)
	{
		n2 *= 10;
		n2 += num2[i] - '0';
	}

	cout << "�����ڸ� �Է��Ͻÿ� ! (+, -, *, / �� �ϳ�) ";
	cin >> op;

	operating(n1,n2,op);
}


void operating(int n1, int n2, char op)
{
	switch (op)
	{
	case '+':
		cout << "����� " << n1 + n2 << "�Դϴ�.";
		break;
	case '-':
		cout << "����� " << n1 - n2 << "�Դϴ�.";
		break;
	case '*':
		cout << "����� " << n1 * n2 << "�Դϴ�.";
		break;
	case '/':
		cout << "����� " << (double)n1 / n2 << "�Դϴ�.";
		break;
	default:
		cout << "�����ڸ� �Է��Ͻÿ� ! (+, -, *, / �� �ϳ�) ";
		cin >> op;
		operating(n1,n2,op);
		break;
	}

	return;
}

void temp_title()
{
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout <<endl;
	cout << "���� <-> ȭ�� �µ� ��ȯ ���α׷��Դϴ�." << endl;
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;
	cout << "	1. ���� �µ� ==> ȭ�� �µ��� ��ȯ" << endl
		<< "	2. ȭ�� �µ� ==> ���� �µ��� ��ȯ" << endl;
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;
	cout << "	1�� ������ ���� �µ� ==> ȭ�� �µ��� ��ȯ��," << endl
		<< "	2�� ������ ȭ�� �µ� ==> ���� �µ��� ��ȯ�ϰ� �˴ϴ�." << endl;
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl << "\n";
	
}
void temp()
{
	int op; //�ɼ�
	double celcius; // ����
	double farenheit; //ȭ��

	temp_title();

	cout << "	������ �����Ͻðڽ��ϱ�(1/2) ? ";
	cin >> op;
	cout << endl;
	switch (op)
	{
	case 1:
		cout << "	���� �µ� ==> ȭ�� �µ��� ��ȯ�� �����Ͽ����ϴ�." << endl
			<< "	���� �µ��� �Է��� �ּ��� ! ";
		cin >> celcius;
		cout << '\n';
		cout << "	��ȯ �µ��� " <<temp_fareheit(celcius)<< " �Դϴ�." << endl;
		break;
	case 2:
		cout << "	ȭ�� �µ� ==> ���� �µ��� ��ȯ�� �����Ͽ����ϴ�." << endl
			<< "	ȭ�� �µ��� �Է��� �ּ��� ! ";
		cin >> farenheit;
		cout << '\n';
		cout << "	��ȯ �µ��� " << temp_celcius(farenheit) << " �Դϴ�." << endl;
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
	cout << "	Ű�� ü�� �ڷᰡ �ʿ��մϴ�." << endl
		<< '\n'
		<< "	Ű�� ����(m) ������ �Է��ϼ��� (�� : 1.78m)" << endl
		<< "	ü���� ų�α׷�(kg) ������ �Է��ϼ��� (�� : 75.5kg)" << endl;
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;
	cout << '\n';

}

void bmi()
{
	bmi_title();
	double weight, height; //������, Ű
	double result; //bmi

	cout << "	Ű�� �Ҽ��� �Ʒ� 2�ڸ����� �Է��Ͻÿ� (�� : 1.78) ! ";
	cin >> height;

	cout << "	�����Ը� �Է��Ͻÿ� (�� : 75.5) ! ";
	cin >> weight;

	result = weight / (height * height);

	cout << '\n'
		<< '\n'
		<< "	BMI : " << result << " �Դϴ�." << endl;
}

int main()
{
	title();

	char opt;
	cin >> opt;

	switch (opt)
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
		case 'q':
			cout << "	���α׷��� �����մϴ�. " << endl;
			break;
	}
	
}