#pragma once
#include <string>
#include <vector>

class Student
{
	// 동적 할당한 후, 학생의 개수와 이름을 입력 받는다.
	// 그 후, 각 개체별 점수를 표시
	// 그 다음 정렬( 점수 순으로 )
	std::string mName[10]{};
	std::vector<int>mRanking;
	int mNumber;
	int mScore;

public:
	Student();
	~Student();

public:
	void Setting();
	void CreateStudent();
	void Sort(int left);

};