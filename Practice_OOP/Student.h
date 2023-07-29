#pragma once
#include <string>
#include <vector>

class Student
{
	// 동적 할당한 후, 학생의 개수와 이름을 입력 받는다.
	// 그 후, 각 개체별 점수를 표시
	// 그 다음 정렬( 점수 순으로 )
	std::string mName[10];
	int mNumber;
	// 후에 정렬을 하기 위해 score를 점수를 입력받아 저장할 배열로 만든다.
	int mScore[];

public:
	Student();
	~Student();

public:
	void Setting();
	void CreateStudent();
	void Sort(int left);
	void Print();
};