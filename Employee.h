#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
	string name;
	float salary;
public:
	Employee();
	Employee(string name, float salary);
	string getName()const;
	float getSalary()const;

	void setName(string name);
	void setSalary(float salary);

	virtual void showInfo()const;

	virtual float calcSalary()const;
};

