#pragma once
#include "Employee.h"
class Teacher : public Employee
{
protected:
	int cost;
	int hours;
public:
	Teacher();
	Teacher(string name, float salary, int cost, int hours);

	int getCost()const;
	int getHours()const;

	void setCost(int cost);
	void setHours(int hours);

	void showInfo()const override;

	float calcSalary()const override;

};

