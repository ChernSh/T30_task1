#include "Teacher.h"

Teacher::Teacher()
{cost = 0;
hours = 0;}

Teacher::Teacher(string name, float salary, int cost, int hours)
    :Employee(name, salary)
{this->cost = cost;
 this->hours = hours;}

int Teacher::getCost() const
{return cost;}

int Teacher::getHours() const
{return hours;}

void Teacher::setCost(int cost)
{this->cost = cost;}

void Teacher::setHours(int hours)
{this->hours = hours;}

void Teacher::showInfo() const
{
    Employee::showInfo();
    cout << "Cost: " << cost << endl;
    cout << "Hours: " << hours << endl;
}

float Teacher::calcSalary() const
{return (salary + cost*hours) * 0.83;}
