#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee a("Brazhnyk Andriy", 15000);
    a.showInfo();
    cout << "Total salary: " << a.calcSalary() << endl;
}

