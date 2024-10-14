#include <iostream>
#include "Employee.h"
#include "Teacher.h"
#include "Manager.h"
#include <typeinfo>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    Employee a("Brazhnyk Andriy", 15000);
    /*a.showInfo();
    cout << "Total salary: " << a.calcSalary() << endl;
    cout << "------------------------------------------\n";*/
    Teacher b("Kaluzhniy Artem", 10000, 500, 20);
    //b.showInfo();
    /*cout << "Total salary: " << b.calcSalary() << endl;
    cout << "------------------------------------------\n";*/
    Manager c("Ponomariov Vsevolod", 12000, 10, 20000);
    /*c.showInfo();
    cout << "Total salary: " << c.calcSalary() << endl;*/

    vector<Employee*> itStep = {&a, &b, &c};
    itStep.push_back(new Manager("Chernyshova Oleksandra", 88000, 20000, 50));
    itStep.push_back(new Manager("Ponamarev Denys", 20000, 10000, 25));
    itStep.push_back(new Teacher("Bob", 25000, 50, 25));
    itStep.push_back(new Employee("Poluektov Danylo", 55000));
    itStep.push_back(new Teacher("Alex", 15000, 450, 15));

    for (int i = 0; i < itStep.size(); i++)
    {
        itStep[i]->showInfo();
        cout << "Total salary: " << itStep[i]->calcSalary() << endl;
        cout << endl;
    }
    cout << "------------------------------------------\n";
    cout << "Managers: \n";
    for (int i = 0; i < itStep.size(); i++)
    {
        if (typeid(*itStep[i]) == typeid(Manager)) {
            cout << "Name: " << itStep[i]->getName() << endl;
        }
    }
    cout << "------------------------------------------\n";
    for (int i = 0; i < itStep.size(); i++)
    {
        if (typeid(*itStep[i]) == typeid(Teacher)) {
            cout << "Name: " << itStep[i]->getName() << endl;
            //Teacher* p = (Teacher*)itStep[i];
            Teacher* p = dynamic_cast<Teacher*>(itStep[i]);
            cout << "Old cost: " << p->getCost() << endl;
            p->setCost(p->getCost() + 100);
            cout << "New cost: " << p->getCost() << endl << endl;
        }
    }
    cout << "------------------------------------------\n";
    //sort(itStep.begin(), itStep.end()); sorting by adress
    sort(itStep.begin(), itStep.end(), [](Employee* a, Employee* b) { return a->calcSalary() > b->calcSalary(); });
    for (int i = 0; i < itStep.size(); i++)
    {
        itStep[i]->showInfo();
        cout << "Total salary: " << itStep[i]->calcSalary() << endl;
        cout << endl;
    }
    //clear
    //for (int i = 3; i < itStep.size(); i++)
    //{
        //delete itStep[i];
    //}

}

