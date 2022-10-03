#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

class Dict
{
	string kor;
	string eng;
public:
	Dict(string kor, string eng)
	{
		this->kor = kor;
		this->eng = eng;
	}
	string getKor()
	{
		return kor;
	}
	string getEng()
	{
		return eng;
	}

};

int main()
{
	cout << "**********************************************************" << endl;
	cout << "	�ѱ� ������ �ش��ϴ� ����ܾ� ���߱� ���α׷�" << endl;
	cout << "**********************************************************" << endl;
	cout << "	�й� : 2019250061	�̸� : Ȳ����" << endl;
	cout << "**********************************************************" << endl;

	vector <Dict> word;
	word.push_back(Dict("�ΰ�", "human"));
	word.push_back(Dict("��ȸ", "society"));
	word.push_back(Dict("����", "doll"));
	word.push_back(Dict("�Ʊ�", "child"));
	word.push_back(Dict("ȣ����", "tiger"));
	word.push_back(Dict("����", "wolf"));
	word.push_back(Dict("��", "dog"));
	word.push_back(Dict("�����", "cat"));
	word.push_back(Dict("�߱�", "baseball"));
	word.push_back(Dict("�౸", "soccer"));

	srand((unsigned)time(0));
	bool exit = true;
	int n;
	string answer;

	string question[4];
	for (int i = 0; i < 4;i++)
		question[i] = "";

	int num[4];
	for (int i = 0; i < 4;i++)
		num[i] = 0;

	int questionCount = 0;
	int wrongCount = 0;
	int rightCount = 0;

	while (exit)
	{
		n = rand() % word.size();
		question[0] = word.at(n).getEng();
		answer = question[0];
		cout << "���� : " << word.at(n).getKor() << endl;
		while (exit)
		{
			for (int i = 1;i < 4;i++)
			{
				n = rand() % word.size();
				question[i] = word.at(n).getEng();
			}
			if (question[0] != question[1] && question[0] != question[2] && question[0] != question[3] &&
				question[1] != question[2] && question[1] != question[3] &&
				question[2] != question[3])
			{
				exit = false;
			}
		}
		exit = true;

		num[0] = rand() % 4;
		while (exit)
		{
			for (int i = 1;i < 4;i++)
			{
				num[i] = rand() % 4;
			}
			if (num[0] != num[1] && num[0] != num[2] && num[0] != num[3] &&
				num[1] != num[2] && num[1] != num[3] &&
				num[2] != num[3])
			{
				exit = false;
			}
		}
		exit = true;

		int result;
		for (int i = 1;i < 5;i++)
		{
			cout << "(" << i << ")" << question[num[i - 1]] << " ";
		}
		cout << "\n��:>> ";
		cin >> result;

		if (result != 1 && result != 2 && result != 3 && result != 4)
		{
			exit = false;
			cout << "���α׷��� �����մϴ�." << endl;
			cout << "***************************" << endl;
			cout << "���ݱ����� ����/���� ���" << endl;
			cout << "***************************" << endl;
			cout << "- �� �׽�Ʈ ���� : " << questionCount << endl;
			cout << "- ����		 : " << rightCount << endl;
			cout << "- ����		 : " << wrongCount << endl;
			cout << "***************************" << endl;
		}
		else if (answer == question[num[result - 1]])
		{
			cout << "�¾ҽ��ϴ�." << endl;
			cout << "\n";
			rightCount++;
		}
		else if (result == 1 || result == 2 || result == 3 || result == 4)
		{
			cout << "Ʋ�Ƚ��ϴ�." << endl;
			cout << "\n";
			wrongCount++;
		}
		questionCount++;

	}
	

}