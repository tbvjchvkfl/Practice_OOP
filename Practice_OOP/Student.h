#pragma once

class Student
{
	char mName[10]{};
	int mNumber;
	int mScore;

	int x;
	
public:
	Student();
	~Student();

public:
	void Setting();
	void CreateStudent();
	void Print()const;
	void Sort()const;

};