#pragma once
#include <string>

class Student
{
	
	// ���� �Ҵ��� ��, �л��� ������ �̸��� �Է� �޴´�.
	// �� ��, �� ��ü�� ������ ǥ��
	// �� ���� ����( ���� ������ )
	int mNumber;
	int mScore;

public:
	Student();
	~Student();

public:
	void Setting();
	void CreateStudent();
	void Sort()const;

};