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

	cout << "	실행프로그램이 있는 폴더에 데이터파일을 준비해 주세요!" << endl
		<< '\n'
		<< "	데이터 파일명은 calc.dat 입니다." << endl;

	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl << '\n';
	cout << "	데이터파일 내부의 형식은 다음과 같습니다." << endl
		<< "	choice (1/2/3)	// 1이면 4칙연산, 2이면 온도변환, 그리고 3이면 비만도 계산" << endl
		<< "	i1, i2, op		// choice가 1일 경우, i1(첫번째 정수), i2(두번째 정수), op (4칙연산자(+,-,*,/ 중 하나) " << endl
		<< "	degreeMode(1/2)	// choice가 2일 경우, degreeMode == 1이면 섭씨->화씨, degreeMode == 2이면 화씨->섭씨 변환" << endl
		<< "	degree	/// 변환 전 온도" << endl
		<< "	height, weight	// choice가 3인 경우, height와 weight는 미터와 킬로그램 단위로 입력하시오." << endl;


	for (int i = 0;i < 10;i++)
		cout << "==========";
	cout << endl << '\n';

}

void arithmetic_title()
{
	cout << "======================" << endl
		<< "사칙연산계산기입니다." << endl
		<< "======================" << endl
		<< '\n';
}

void arithmetic()
{
	arithmetic_title();
	int firstInteger, secondInteger;
	double result=0;
	char op;  //연산자
	fin >> firstInteger >> secondInteger >> op;

	if (!fin)
	{
		cout << "	정수가 아닌 수가 입력되었습니다." << endl;
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
		cout << "	연산자를 잘못 입력하였습니다." << endl;
		return;
		break;
	}

	cout << "	파일로 입력한 두 정수와 연산자는 다음과 같습니다. " << endl
		<< "	i1 = " << firstInteger << endl
		<< "	i2 = " << secondInteger << endl
		<< "	op = " << op << endl;

	cout << "	결과는 " << result << "입니다." << endl;
}

void temp_title()
{
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl;
	cout << "섭씨 <-> 화씨 온도 변환 프로그램입니다." << endl;
	for (int i = 0;i < 6;i++)
		cout << "==========";
	cout << endl << '\n';

}
void temp()
{
	int op; //옵션
	double temperature;

	temp_title();

	fin >> op >> temperature;
	switch (op)
	{
	case 1:
		cout << "	섭씨 온도 ==> 화씨 온도로 변환을 선택하였습니다." << endl;
		cout << "	파일로 입력한 섭씨 온도 " << temperature << endl;
		cout << '\n';
		cout << "	변환 온도는 " << temp_fareheit(temperature) << " 입니다." << endl;
		break;
	case 2:
		cout << "	화씨 온도 ==> 섭씨 온도로 변환을 선택하였습니다." << endl;
		cout << "	파일로 입력한 화씨 온도 " << temperature << endl;
		cout << '\n';
		cout << "	변환 온도는 " << temp_celcius(temperature) << " 입니다." << endl;
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
	cout << '\n' << '\n' << '\n';

}

void bmi()
{
	bmi_title();
	double weight, height; //몸무게, 키
	double result; //bmi
	
	fin >> height >> weight;

	cout << "	파일로 입력한 키와 몸무게는 다음과 같습니다." << endl;
	cout << "	키	: " << height << endl;
	cout << "	몸무게	: " << weight << endl;
	
	result = weight / (height * height);

	cout << '\n'
		<< "	BMI : " << result << " 입니다." << endl;
}

int main()
{
	title();
	
	char choice;
	
	fin.open("calc.dat");
	if (!fin)
	{
		cout << "데이터파일이 없습니다.";
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