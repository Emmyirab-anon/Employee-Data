
#include <iostream>
#include <iomanip>
using namespace std;
#include "Employee.h"

int main()
{
	Employee employeeArray[NUM_EMPL];
	int inputId;
	int index;

	cout << fixed << showpoint << setprecision(2);

	for (int i = 0; i < NUM_EMPL; i++)
	{
		employeeArray[i] = readEmployee();
		cin.ignore(256, '\n');
	}
	cout << endl;
	for (int i = 0; i < NUM_EMPL; i++)
	{
		printEmployee(employeeArray[i]);
	}

	cout << "Enter an id to look for: ";
	cin >> inputId;

	index = findEmployee(employeeArray, inputId, 5);
	if (index >= 0)
	{
		cout << "Found Employee: " << employeeArray[index].name << endl;
	}
	else
		cout << "Did not find an Employee with that id!" << endl;

}
