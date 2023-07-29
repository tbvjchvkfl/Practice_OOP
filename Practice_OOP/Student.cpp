#include <iostream>
#include "Student.h"

Student::Student()
{
	mNumber = 0;
}

Student::~Student()
{

}

void Student::Setting()
{
	
	std::cout << "학생의 숫자를 입력하세요" << std::endl;
	std::cout << "숫자는 1 ~ 10까지의 숫자만 입력할 수 있습니다." << std::endl;
	std::cin >> mNumber;
	if (mNumber == 0)
	{
		std::cout << "학생이 없습니다." << std::endl;
		return;
	}
	else if (mNumber > 10)
	{
		std::cout << "학생이 너무 많습니다." << std::endl;
		std::cout << "10명의 학생까지만 표시됩니다." << std::endl;
	}
}

void Student::CreateStudent()
{
	for (int i = 0; i < mNumber; i++)
	{
		std::cout << "-----------" << std::endl;
		std::cout << "번호 : " << i + 1 << std::endl;
		std::cout << "점수 : ";
		std::cin >> mScore[i];
		std::cout << "이름 : ";
		std::cin >> mName[i];
		std::cout << "-----------" << std::endl;
	}
}
void Student::Sort(int left)
{
	//// Quick Sort
	int i = left;
	int j = mNumber - 1;
	int pivot = mScore[(left + (mNumber - 1)) / 2];


	while (i <= j)
	{
		while (mScore[i] < pivot)
		{
			i++;
		}

		while (mScore[j] > pivot)
		{
			j--;
		}

		if (i <= j)
		{
			int temp = mScore[i];
			mScore[i] = mScore[j];
			mScore[j] = temp;
			i++;
			j--;
		}
	}
	if (left < j)
	{
		Sort(left);
	}
	if (i < mNumber - 1)
	{
		Sort(i);
	}
}
void Student::Print()
{
	for (int a = 0; a < mNumber; a++)
	{
		std::cout << mScore[a] << std::endl;
	}
}