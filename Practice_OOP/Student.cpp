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
	
	std::cout << "학생의 숫자를 입력하세요" << std::endl;
	std::cout << "숫자는 1 ~ 10까지의 숫자만 입력할 수 있습니다." << std::endl;
	std::cin >> x;
	if (x == 0)
	{
		std::cout << "학생이 없습니다." << std::endl;
		return;
	}
	else if (x > 10)
	{
		std::cout << "학생이 너무 많습니다." << std::endl;
		std::cout << "10명의 학생까지만 표시됩니다." << std::endl;
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
	// 점수 순으로 정렬 시킬 것.
}
