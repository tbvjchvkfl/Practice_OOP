#include<iostream>
#include "Date.h"
#include "Student.h"
int main()
{
	//Date d1;
	//d1.Setter();
	//d1.PrintDate();

	Student s1;
	s1.Setting();
	s1.CreateStudent();

	char a{};
	std::cout << "점수 순으로 정렬하시겠습니까?" << std::endl;
	std::cout << "y == 정렬 시작 / n == 종료";

	std::cin >> a;
	
	if (a == 'y')
	{
		s1.Sort(0);
	}
	else if (a == 'n')
	{
		return 0;
	}
	
}