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
	std::cout << "���� ������ �����Ͻðڽ��ϱ�?" << std::endl;
	std::cout << "y == ���� ���� / n == ����";

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