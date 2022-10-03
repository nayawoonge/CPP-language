#include <iostream>
using namespace std;

class CAnimal //추상클래스 : 최소한 하나 이상의 순수 가상 함수를 가진 클래스
{
public:
	virtual char* getSound() = 0;
	virtual char* getName() = 0;
};

class CPig : public CAnimal //pig클래스
{
	char pigname[10] = "돼지";
	char pigsound[10] = "꿀꿀";
	virtual char* getName() { return pigname; }
	//순수가상함수 오버라이딩 따라서 Cpig클래스는 추상클래스아님
	virtual char* getSound() { return pigsound; }

public:
	CPig()
	{
		cout << "2019250061 / 황지웅" << endl;
	}
};

class CWolf : public CAnimal //wolf클래스
{
	char wolfname[10] = "늑대";
	char wolfsound[10] = "아우";
	virtual char* getName() { return wolfname; }
	virtual char* getSound() { return wolfsound;  }
};

class CRabbit : public CAnimal //rabbit클래스
{
	char rabbitname[10] = "토끼";
	char rabbitsound[10] = "없음";
	virtual char* getName() { return rabbitname; }
	virtual char* getSound() { return rabbitsound; }
};

class CDog : public CWolf //dog클래스
{
	char dogname[10] = "개";
	char dogsound[10] = "멍멍";
	virtual char* getName(){ return dogname; }
	virtual char* getSound() { return dogsound; }
};

void printSound(CAnimal* p)
{
	cout << p->getName() << " : " << p->getSound() << endl;
}

int main(void)
{
	CAnimal* p1 = new CPig; //업캐스팅
	printSound(p1);
	CAnimal* p2 = new CWolf;
	printSound(p2);
	CAnimal* p3 = new CDog;
	printSound(p3);
	CAnimal* p4 = new CRabbit;
	printSound(p4);
	return 0;
}