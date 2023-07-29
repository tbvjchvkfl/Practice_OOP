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
	for (int i = 0; i < mNumber; i++)
	{
		std::cout << "-----------" << std::endl;
		std::cout << "��ȣ : " << i + 1 << std::endl;
		std::cout << "���� : ";
		std::cin >> mScore[i];
		std::cout << "�̸� : ";
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