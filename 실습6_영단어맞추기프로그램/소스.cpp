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
	cout << "	한글 낱말에 해당하는 영어단어 맞추기 프로그램" << endl;
	cout << "**********************************************************" << endl;
	cout << "	학번 : 2019250061	이름 : 황지웅" << endl;
	cout << "**********************************************************" << endl;

	vector <Dict> word;
	word.push_back(Dict("인간", "human"));
	word.push_back(Dict("사회", "society"));
	word.push_back(Dict("인형", "doll"));
	word.push_back(Dict("아기", "child"));
	word.push_back(Dict("호랑이", "tiger"));
	word.push_back(Dict("늑대", "wolf"));
	word.push_back(Dict("개", "dog"));
	word.push_back(Dict("고양이", "cat"));
	word.push_back(Dict("야구", "baseball"));
	word.push_back(Dict("축구", "soccer"));

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
		cout << "문제 : " << word.at(n).getKor() << endl;
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
		cout << "\n답:>> ";
		cin >> result;

		if (result != 1 && result != 2 && result != 3 && result != 4)
		{
			exit = false;
			cout << "프로그램을 종료합니다." << endl;
			cout << "***************************" << endl;
			cout << "지금까지의 정답/오답 통계" << endl;
			cout << "***************************" << endl;
			cout << "- 총 테스트 문제 : " << questionCount << endl;
			cout << "- 정답		 : " << rightCount << endl;
			cout << "- 오답		 : " << wrongCount << endl;
			cout << "***************************" << endl;
		}
		else if (answer == question[num[result - 1]])
		{
			cout << "맞았습니다." << endl;
			cout << "\n";
			rightCount++;
		}
		else if (result == 1 || result == 2 || result == 3 || result == 4)
		{
			cout << "틀렸습니다." << endl;
			cout << "\n";
			wrongCount++;
		}
		questionCount++;

	}
	

}