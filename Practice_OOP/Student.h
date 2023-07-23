#pragma once
#include <string>
#include <vector>

class Student
{
	// ���� �Ҵ��� ��, �л��� ������ �̸��� �Է� �޴´�.
	// �� ��, �� ��ü�� ������ ǥ��
	// �� ���� ����( ���� ������ )
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