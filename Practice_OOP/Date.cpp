#include <iostream>
#include "Date.h"

Date::Date()
{
    mYear = 0;
    mMonth = 0;
    mDay = 0;
    std::cout << "�⺻ ������" << std::endl;
    std::cout << "---------------------------" << std::endl;
}

Date::~Date()
{
    std::cout << "---------------------------" << std::endl;
    std::cout << "�⺻ �Ҹ���" << std::endl;
}

void Date::Setter()
{
    mYear = 2023;
    mMonth = 07;
    mDay = 19;
}

int Date::PrintDate() const
{
    std::cout << "������ ��¥�� " << mYear << "�� " << mMonth << "�� " << mDay << "�� �Դϴ�." << std::endl;
    return 0;
}
