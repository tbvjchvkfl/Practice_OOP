#include <iostream>
#include "Date.h"

Date::Date()
{
    mYear = 0;
    mMonth = 0;
    mDay = 0;
    std::cout << "기본 생성자" << std::endl;
    std::cout << "---------------------------" << std::endl;
}

Date::~Date()
{
    std::cout << "---------------------------" << std::endl;
    std::cout << "기본 소멸자" << std::endl;
}

void Date::Setter()
{
    mYear = 2023;
    mMonth = 07;
    mDay = 19;
}

int Date::PrintDate() const
{
    std::cout << "오늘의 날짜는 " << mYear << "년 " << mMonth << "월 " << mDay << "일 입니다." << std::endl;
    return 0;
}
