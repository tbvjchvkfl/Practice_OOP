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
	std::cin >> mNumber;
	if (mNumber == 0)
	{
		std::cout << "�л��� �����ϴ�." << std::endl;
		return;
	}
	else if (mNumber > 10)
	{
		std::cout << "�л��� �ʹ� �����ϴ�." << std::endl;
		std::cout << "10���� �л������� ǥ�õ˴ϴ�." << std::endl;
	}
}

void Student::CreateStudent()
{

	std::string* mName = new std::string[mNumber];
	for (int i = 0; i < mNumber; i++)
	{
		std::cout << "-----------" << std::endl;
		std::cout << "��ȣ : " << i + 1 << std::endl;
		std::cout << "���� : ";
		std::cin >> mScore;
		std::cout << "�̸� : ";
		std::cin >> mName[i];
		std::cout << "-----------" << std::endl;
	}
}
void Student::Sort() const
{
	// ���� ������ ���� ��ų ��.
	
}
