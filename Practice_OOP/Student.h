#pragma once
#include <string>
#include <vector>

class Student
{
	// ���� �Ҵ��� ��, �л��� ������ �̸��� �Է� �޴´�.
	// �� ��, �� ��ü�� ������ ǥ��
	// �� ���� ����( ���� ������ )
	std::string mName[10];
	int mNumber;
	// �Ŀ� ������ �ϱ� ���� score�� ������ �Է¹޾� ������ �迭�� �����.
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