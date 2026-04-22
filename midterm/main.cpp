#include <iostream>
#include "functions.h"
#include <vector>
#include <string>
#include <iomanip>

using namespace std;
using std::vector;

int main(void)
{
	int numstudent; // 학생 수 지정

	// 학생 수 입력받기
	cout << "Enter number of Students: ";
	cin >> numstudent;

	vector<student> nstudent;
	
	// 학생의 정보 입력받기
	for (int i = 0; i < numstudent; ++i)
	{
		student cstudent;
		cout << "== Studnet " << i + 1 << "==\n";

		//학생 이름 입력 받기
		cout << "Enter your name: ";
		cin >> cstudent.name;

		//점수 입력 받기
		cout << "Enter 3 scores: ";
		for (int j = 0; j < 3; j++)
		{
			int score;
			cin >> score;
			//학생 점수 저장
			cstudent.scores.push_back(score);
		}
		//학생 정보 저장.
		nstudent.push_back(cstudent);
	}

	// 점수 계산하기
	cout << "\n--- Grade Summary ---\n";

	for (const student& s : nstudent) {
		double average = calculateAverage(s.scores);
		
		cout << s.name << ": " << setprecision(3) << average << "\n";
		if (average >= 90) {
			cout << " ==> Excellent\n";
		}
	}
	return 0;
}
