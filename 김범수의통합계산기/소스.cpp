#include <stdio.h>
#include<iostream>
using namespace std;
int first, add1, add2, add_tool, temp, temp_F, temp_C;
double F_temp, C_temp, bmi, height, weight;

int title()
{
	cout << "======================================================" << endl;
	cout << "   �����α׷������հ������α׷��Դϴ�." << endl;
	cout << "   ���հ���´������Ҽ��ֽ��ϴ�." << endl;
	cout << "   1. �����ǻ�Ģ����" << endl;
	cout << "   2. ����< ->ȭ���µ���ȯ" << endl;
	cout << "   3. �񸸵����" << endl;
	cout << "======================================================" << endl;
	cout << "�й�: 2019250007 �̸�: �����" << endl;
	cout << "===================================" << endl;
	cout << "   1�������������ǻ�Ģ������," << endl;
	cout << "   2�������鼷��ȭ���µ���ȯ��" << endl;
	cout << "   3��������񸸵�����������ϰԵ˴ϴ�." << endl;
	cout << "   q�����������հ�����α׷��������ϰԵ˴ϴ�." << endl;
	cout << "======================================================" << endl << endl;
	cout << "   �����������Ͻðڽ��ϱ�(1 / 2 / 3 / q) ? " << endl;
	return 0;
}
int title_1()
{
	cout << "========================" << endl;
	cout << "��Ģ��������Դϴ�." << endl;
	cout << "========================" << endl;
	cout << "���������Է�����, �����ڸ��Է��ϼ���." << endl << endl;
	cout << "ù��°�������Է��Ͻÿ�! ";
	
		cin >> add1;
		
			while (1)
			{
				if (getchar() != '\n')
				{
					printf("�߸��Է��ϼ̽��ϴ�. ���ڸ��ٽ��Է��ϼ���.\n");
					//while (getchar() != '\n');
				}
				else
				{
					add1 = getchar();
					break;
				}
					
			}
		
	cout << "�ι�°�������Է��Ͻÿ�! ";
	while (2) {
		cin >> add2;
		if (getchar() != '\n') {
			printf("�߸��Է��ϼ̽��ϴ�. ���ڸ��ٽ��Է��ϼ���.\n");
			while (getchar() == '\n');
		}
		else break;
	}
	cout << "�����ڸ��Է��Ͻÿ�! (+, -, *, / ���ϳ�) ";
	cin >> add_tool;
	switch (add_tool) {
	case '+':
		cout << "�����" << add1 + add2 << "�Դϴ�";
		break;
	case '-':
		cout << "�����" << (add1 - add2) << "�Դϴ�";
		break;
	case '*':
		cout << "�����" << (add1 * add2) << "�Դϴ�";
		break;
	case '/':
		double nanugi = double(add1) / double(add2);
		cout << "�����" << nanugi << "�Դϴ�";
		break;
	}
	return 0;
}
int title_2()
{
	cout << "================================================" << endl;
	cout << "����< ->ȭ���µ���ȯ���α׷��Դϴ�." << endl;
	cout << "================================================" << endl;
	cout << "   1. �����µ�==> ȭ���µ��κ�ȯ" << endl;
	cout << "   2. ȭ���µ�==> �����µ��κ�ȯ" << endl;
	cout << "================================================" << endl;
	cout << "   1�������鼷���µ�==>ȭ���µ��κ�ȯ��," << endl;
	cout << "   2��������ȭ���µ�==>�����µ��κ�ȯ�ϰԵ˴ϴ�." << endl;
	cout << "===========================================================" << endl << endl;
	cout << "   �����������Ͻðڽ��ϱ�(1/2) ? ";
	cin >> temp;
	switch (temp) {
	case 1:
		cout << "   �����µ�==> ȭ���µ��κ�ȯ�������Ͽ����ϴ�." << endl;
		cout << "   �����µ����Է����ּ���! ";
		cin >> temp_F;
		F_temp = ((9.0 / 5.0) * temp_F + 32.0);
		cout << "   ��ȯ�µ���" << F_temp << "�Դϴ�" << endl;
		break;
	case 2:
		cout << "   ȭ���µ�==> �����µ��κ�ȯ�������Ͽ����ϴ�." << endl;
		cout << "   ȭ���µ����Է����ּ���! ";
		cin >> temp_C;
		C_temp = ((temp_C - 32.0) * (5.0 / 9.0));
		cout << "   ��ȯ�µ���" << C_temp << "�Դϴ�" << endl;
		break;
	}
	return 0;
}
int title_3()
{
	cout << "========================================" << endl;
	cout << "   �񸸵�������α׷��Դϴ�." << endl;
	cout << "========================================" << endl;
	cout << "    Ű��ü���ڷᰡ�ʿ��մϴ�." << endl << endl;
	cout << "    Ű�¹���(m) �������Է��ϼ���(��: 1.78m)" << endl;
	cout << "    ü����ų�α׷�(kg) �������Է��ϼ���(��: 75.5kg)" << endl;
	cout << "=====================================================================" << endl << endl;
	cout << "       Ű���Ҽ����Ʒ�2�ڸ������Է��Ͻÿ�(��: 1.78) ! ";
	cin >> height;
	cout << "       �����Ը��Է��Ͻÿ�(��: 75.5) ! ";
	cin >> weight;
	bmi = weight / (height * height);
	cout << "       BMI : " << bmi << "�Դϴ�." << endl;
	return 0;
}
int main()
{
	title();
	cin >> first;
	switch (first)
	{
	case 1:
		title_1();
		break;
	case 2:
		title_2();
		break;
	case 3:
		title_3();
		break;
	case 'q':
		cout << "���α׷�������Ǿ����ϴ�.";
		break;
	}
	return 0;
}