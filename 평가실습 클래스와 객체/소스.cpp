#include <iostream>
using namespace std;

void title() {
    cout << "++++++++++++++실습 #3**************" << endl;
    cout << "   클래스 및 객체 실습" << endl;
    cout << "++++++++++++++**************************" << endl;
    cout << "   학번 : 2019250061, 이름 : 황지웅" << endl;
}

class Student {
public:
    const char* studentID;
    const char* name;
    int koreanScore;
    int mathScore;
    int englishScore;
    int totalScore;

    Student(const char* studentID, const char* name);
    static int numOfStudent;

    void setKoreanScore(int score);
    void setMathScore(int score);
    void setEnglishScore(int score);
    void calcTotalScore();
    int getKoreanScore();
    int getMathScore();
    int getEnglishScore();
    int getTotalScore();
    void scorePrint();
};
int Student::numOfStudent = 0;

Student::Student(const char* studentID, const char* name) 
{
    this->studentID = studentID;
    this->name = name;
    cout << "    학번 : " << studentID << ", 이름 : " << name << endl;
    numOfStudent++;
}
void Student::setKoreanScore(int score) 
{ 
    if(score>=0&&score<=100)
        koreanScore = score;
    else
    {
        cout << "   error : koreanScore 100 초과" << endl; //score 값이 100을 초과하면 프로그램 종료
        exit(1);
    }
}
void Student::setMathScore(int score) 
{ 
    if (score >= 0 && score <= 100)
        mathScore = score;
    else
    {
        cout << "   error : mathScore 100 초과" << endl; //score 값이 100을 초과하면 프로그램 종료
        exit(1);
    }
}
void Student::setEnglishScore(int score) 
{ 
    if (score >= 0 && score <= 100)
         englishScore = score;
    else
    {
        cout << "   error : englishScore 100 초과" << endl; //score 값이 100을 초과하면 프로그램 종료
        exit(1);
    }
}
void Student::calcTotalScore() { totalScore = koreanScore + mathScore + englishScore;}

int Student::getKoreanScore() { return koreanScore; }
int Student::getMathScore() { return mathScore; }
int Student::getEnglishScore() { return englishScore; }
int Student::getTotalScore() { return totalScore; }
void Student::scorePrint() {
    cout << "       국어 : " << koreanScore << "점," << "   수학 : " << mathScore << "점," << "    영어 : " << englishScore << "점," << endl;
    cout << "       전체 : " << totalScore << "점" << endl;
    int getKoreanScore();
    int getMathScore();
    int getEnglishScore();
    int getTotalScore();
}

int main() {
    title();
    cout << "********************************************************" << endl;
    Student studentOne("1236", "성춘향");
    cout << "Before Input Score" << endl;
    studentOne.scorePrint();
    studentOne.setKoreanScore(90);
    studentOne.setMathScore(91);
    studentOne.setEnglishScore(92);
    studentOne.calcTotalScore();
    cout << "After Input Score" << endl;
    studentOne.scorePrint();
    cout << "********************************************************" << endl;
    cout << "전체 학생수 : " << Student::numOfStudent << endl;
    cout << "********************************************************" << endl << endl;
    Student studentTwo("1237", "강감찬");
    cout << "Before Input Score" << endl;
    studentTwo.scorePrint();
    studentTwo.setKoreanScore(95);
    studentTwo.setMathScore(96);
    studentTwo.setEnglishScore(97);
    studentTwo.calcTotalScore();
    cout << "After Input Score" << endl;
    studentTwo.scorePrint();
    cout << "********************************************************" << endl;
    cout << "전체 학생수 : " << Student::numOfStudent << endl;
    cout << "********************************************************" << endl;
    return 0;

}