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

	cout << "	이 프로그램은 통합계산기 프로그램입니다." << endl
		<< "	통합계산기는 다음을 할 수 있습니다." << endl
		<< "	1. 정수의 사칙연산" << endl
		<< "	2. 섭씨 <-> 화씨 온도 변환" << endl 
		<< "	3. 비만도 계산" << endl;

	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;

	cout << "학번 : 2019250061	이름 : 황지웅" << endl;

	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;

	cout << "	1을 누르면 정수의 사칙연산을," << endl 
		<< "	2을 누르면 섭씨화씨 온도 변환을" << endl 
		<< "	3을 누르면 비만도 계산을 선택하게 됩니다." << endl 
		<< "	q를 누르면 통합계산 프로그램을 종료하게 됩니다." << endl;

	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;


	cout << '\n' << "	무엇을 선택하시겠습니까(1 / 2 / 3 / q) ?" << endl;

}

void arithmetic_title()
{
	cout << "======================" << endl
		<< "사칙연산계산기입니다." << endl
		<< "======================" << endl
		<< "두 정수를 입력한 후, 연산자를 입력하세요." << endl;
}

void arithmetic()
{
	arithmetic_title();

	double n1=0.0, n2=0.0; //정수1, 정수2
	char op;  //연산자
	char num1[100];
	char num2[100];

	bool flag1 = false;
	while (!flag1)
	{
		flag1 = true;
		cout << "첫번째 정수를 입력하시오 ! ";
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
		cout << "두번째 정수를 입력하시오 ! ";
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

	cout << "연산자를 입력하시오 ! (+, -, *, / 중 하나) ";
	cin >> op;

	operating(n1,n2,op);
}


void operating(int n1, int n2, char op)
{
	switch (op)
	{
	case '+':
		cout << "결과는 " << n1 + n2 << "입니다.";
		break;
	case '-':
		cout << "결과는 " << n1 - n2 << "입니다.";
		break;
	case '*':
		cout << "결과는 " << n1 * n2 << "입니다.";
		break;
	case '/':
		cout << "결과는 " << (double)n1 / n2 << "입니다.";
		break;
	default:
		cout << "연산자를 입력하시오 ! (+, -, *, / 중 하나) ";
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
	cout << "섭씨 <-> 화씨 온도 변환 프로그램입니다." << endl;
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;
	cout << "	1. 섭씨 온도 ==> 화씨 온도로 변환" << endl
		<< "	2. 화씨 온도 ==> 섭씨 온도로 변환" << endl;
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;
	cout << "	1을 누르면 섭씨 온도 ==> 화씨 온도로 변환을," << endl
		<< "	2을 누르면 화씨 온도 ==> 섭씨 온도로 변환하게 됩니다." << endl;
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl << "\n";
	
}
void temp()
{
	int op; //옵션
	double celcius; // 섭씨
	double farenheit; //화씨

	temp_title();

	cout << "	무엇을 선택하시겠습니까(1/2) ? ";
	cin >> op;
	cout << endl;
	switch (op)
	{
	case 1:
		cout << "	섭씨 온도 ==> 화씨 온도로 변환을 선택하였습니다." << endl
			<< "	섭씨 온도를 입력해 주세요 ! ";
		cin >> celcius;
		cout << '\n';
		cout << "	변환 온도는 " <<temp_fareheit(celcius)<< " 입니다." << endl;
		break;
	case 2:
		cout << "	화씨 온도 ==> 섭씨 온도로 변환을 선택하였습니다." << endl
			<< "	화씨 온도를 입력해 주세요 ! ";
		cin >> farenheit;
		cout << '\n';
		cout << "	변환 온도는 " << temp_celcius(farenheit) << " 입니다." << endl;
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
	cout << "	비만도 계산 프로그램입니다." << endl;
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;
	cout << "	키와 체중 자료가 필요합니다." << endl
		<< '\n'
		<< "	키는 미터(m) 단위로 입력하세요 (예 : 1.78m)" << endl
		<< "	체중은 킬로그램(kg) 단위로 입력하세요 (예 : 75.5kg)" << endl;
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;
	cout << '\n';

}

void bmi()
{
	bmi_title();
	double weight, height; //몸무게, 키
	double result; //bmi

	cout << "	키를 소수점 아래 2자리까지 입력하시오 (예 : 1.78) ! ";
	cin >> height;

	cout << "	몸무게를 입력하시오 (예 : 75.5) ! ";
	cin >> weight;

	result = weight / (height * height);

	cout << '\n'
		<< '\n'
		<< "	BMI : " << result << " 입니다." << endl;
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
			cout << "	프로그램을 종료합니다. " << endl;
			break;
	}
	
}