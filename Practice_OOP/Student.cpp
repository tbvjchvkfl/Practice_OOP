#include <iostream>
#include "Student.h"

Student::Student()
{

	mNumber = 0;
	mScore = 0;
}

Student::~Student()
{

}

void Student::Setting()
{
	
	std::cout << "�л��� ���ڸ� �Է��ϼ���" << std::endl;
	std::cout << "���ڴ� 1 ~ 10������ ���ڸ� �Է��� �� �ֽ��ϴ�." << std::endl;
	std::cin >> x;
	if (x == 0)
	{
		std::cout << "�л��� �����ϴ�." << std::endl;
		return;
	}
	else if (x > 10)
	{
		std::cout << "�л��� �ʹ� �����ϴ�." << std::endl;
		std::cout << "10���� �л������� ǥ�õ˴ϴ�." << std::endl;
	}
}

void Student::CreateStudent()
{
	srand(time(nullptr));
	mNumber = rand() % (10) + 1;
	mScore = rand() % 100;
}

void Student::Print() const
{
	std::cout << "---------------------" << std::endl;
	std::cout << mName << std::endl;
	std::cout << mNumber << std::endl;
	std::cout << mScore << std::endl;
	std::cout << "---------------------" << std::endl;
}

void Student::Sort() const
{
	// ���� ������ ���� ��ų ��.
}
