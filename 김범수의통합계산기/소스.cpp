#include <stdio.h>
#include<iostream>
using namespace std;
int first, add1, add2, add_tool, temp, temp_F, temp_C;
double F_temp, C_temp, bmi, height, weight;

int title()
{
	cout << "======================================================" << endl;
	cout << "   이프로그램은통합계산기프로그램입니다." << endl;
	cout << "   통합계산기는다음을할수있습니다." << endl;
	cout << "   1. 정수의사칙연산" << endl;
	cout << "   2. 섭씨< ->화씨온도변환" << endl;
	cout << "   3. 비만도계산" << endl;
	cout << "======================================================" << endl;
	cout << "학번: 2019250007 이름: 김범수" << endl;
	cout << "===================================" << endl;
	cout << "   1을누르면정수의사칙연산을," << endl;
	cout << "   2를누르면섭씨화씨온도변환을" << endl;
	cout << "   3을누르면비만도계산을선택하게됩니다." << endl;
	cout << "   q를누르면통합계산프로그램을종료하게됩니다." << endl;
	cout << "======================================================" << endl << endl;
	cout << "   무엇을선택하시겠습니까(1 / 2 / 3 / q) ? " << endl;
	return 0;
}
int title_1()
{
	cout << "========================" << endl;
	cout << "사칙연산계산기입니다." << endl;
	cout << "========================" << endl;
	cout << "두정수를입력한후, 연산자를입력하세요." << endl << endl;
	cout << "첫번째정수를입력하시오! ";
	
		cin >> add1;
		
			while (1)
			{
				if (getchar() != '\n')
				{
					printf("잘못입력하셨습니다. 숫자만다시입력하세요.\n");
					//while (getchar() != '\n');
				}
				else
				{
					add1 = getchar();
					break;
				}
					
			}
		
	cout << "두번째정수를입력하시오! ";
	while (2) {
		cin >> add2;
		if (getchar() != '\n') {
			printf("잘못입력하셨습니다. 숫자만다시입력하세요.\n");
			while (getchar() == '\n');
		}
		else break;
	}
	cout << "연산자를입력하시오! (+, -, *, / 중하나) ";
	cin >> add_tool;
	switch (add_tool) {
	case '+':
		cout << "결과는" << add1 + add2 << "입니다";
		break;
	case '-':
		cout << "결과는" << (add1 - add2) << "입니다";
		break;
	case '*':
		cout << "결과는" << (add1 * add2) << "입니다";
		break;
	case '/':
		double nanugi = double(add1) / double(add2);
		cout << "결과는" << nanugi << "입니다";
		break;
	}
	return 0;
}
int title_2()
{
	cout << "================================================" << endl;
	cout << "섭씨< ->화씨온도변환프로그램입니다." << endl;
	cout << "================================================" << endl;
	cout << "   1. 섭씨온도==> 화씨온도로변환" << endl;
	cout << "   2. 화씨온도==> 섭씨온도로변환" << endl;
	cout << "================================================" << endl;
	cout << "   1을누르면섭씨온도==>화씨온도로변환을," << endl;
	cout << "   2를누르면화씨온도==>섭씨온도로변환하게됩니다." << endl;
	cout << "===========================================================" << endl << endl;
	cout << "   무엇을선택하시겠습니까(1/2) ? ";
	cin >> temp;
	switch (temp) {
	case 1:
		cout << "   섭씨온도==> 화씨온도로변환을선택하였습니다." << endl;
		cout << "   섭씨온도를입력해주세요! ";
		cin >> temp_F;
		F_temp = ((9.0 / 5.0) * temp_F + 32.0);
		cout << "   변환온도는" << F_temp << "입니다" << endl;
		break;
	case 2:
		cout << "   화씨온도==> 섭씨온도로변환을선택하였습니다." << endl;
		cout << "   화씨온도를입력해주세요! ";
		cin >> temp_C;
		C_temp = ((temp_C - 32.0) * (5.0 / 9.0));
		cout << "   변환온도는" << C_temp << "입니다" << endl;
		break;
	}
	return 0;
}
int title_3()
{
	cout << "========================================" << endl;
	cout << "   비만도계산프로그램입니다." << endl;
	cout << "========================================" << endl;
	cout << "    키와체중자료가필요합니다." << endl << endl;
	cout << "    키는미터(m) 단위로입력하세요(예: 1.78m)" << endl;
	cout << "    체중은킬로그램(kg) 단위로입력하세요(예: 75.5kg)" << endl;
	cout << "=====================================================================" << endl << endl;
	cout << "       키를소수점아래2자리까지입력하시오(예: 1.78) ! ";
	cin >> height;
	cout << "       몸무게를입력하시오(예: 75.5) ! ";
	cin >> weight;
	bmi = weight / (height * height);
	cout << "       BMI : " << bmi << "입니다." << endl;
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
		cout << "프로그램이종료되었습니다.";
		break;
	}
	return 0;
}