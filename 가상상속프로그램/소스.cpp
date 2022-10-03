#include <iostream>
using namespace std;

class CAnimal //�߻�Ŭ���� : �ּ��� �ϳ� �̻��� ���� ���� �Լ��� ���� Ŭ����
{
public:
	virtual char* getSound() = 0;
	virtual char* getName() = 0;
};

class CPig : public CAnimal //pigŬ����
{
	char pigname[10] = "����";
	char pigsound[10] = "�ܲ�";
	virtual char* getName() { return pigname; }
	//���������Լ� �������̵� ���� CpigŬ������ �߻�Ŭ�����ƴ�
	virtual char* getSound() { return pigsound; }

public:
	CPig()
	{
		cout << "2019250061 / Ȳ����" << endl;
	}
};

class CWolf : public CAnimal //wolfŬ����
{
	char wolfname[10] = "����";
	char wolfsound[10] = "�ƿ�";
	virtual char* getName() { return wolfname; }
	virtual char* getSound() { return wolfsound;  }
};

class CRabbit : public CAnimal //rabbitŬ����
{
	char rabbitname[10] = "�䳢";
	char rabbitsound[10] = "����";
	virtual char* getName() { return rabbitname; }
	virtual char* getSound() { return rabbitsound; }
};

class CDog : public CWolf //dogŬ����
{
	char dogname[10] = "��";
	char dogsound[10] = "�۸�";
	virtual char* getName(){ return dogname; }
	virtual char* getSound() { return dogsound; }
};

void printSound(CAnimal* p)
{
	cout << p->getName() << " : " << p->getSound() << endl;
}

int main(void)
{
	CAnimal* p1 = new CPig; //��ĳ����
	printSound(p1);
	CAnimal* p2 = new CWolf;
	printSound(p2);
	CAnimal* p3 = new CDog;
	printSound(p3);
	CAnimal* p4 = new CRabbit;
	printSound(p4);
	return 0;
}