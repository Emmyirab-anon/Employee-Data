#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

void printEmployee(const Employee& c)
{

	cout << "The Employee info is: " << c.name << ", " << c.id << ", $" << c.salary << endl;

}
Employee readEmployee()
{
	Employee emp;
	cout << "Employee Name?: ";
	getline(cin, emp.name);
	cout << "Employee ID?: ";
	cin >> emp.id;
	cout << "Employee Yearly Salaray?: ";
	cin >> emp.salary;

	return emp;
}
int findEmployee(const Employee array[], int tId, int num)
{
	for (int i = 0; i < num; i++)
	{
		if (array[i].id == tId)
		{
			return i;
		}
	}
	return -1;
}
