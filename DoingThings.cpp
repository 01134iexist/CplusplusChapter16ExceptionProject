#include "ProductionWorker.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	// demonstrating employee exception handling
	Employee girl;
	cout << "Employee name : " << endl;
	string name;
	cin >> name;
	girl.setName(name);
	cout << "The employee name is: " << girl.getName() << endl;
	//try block
	try
	{
		cout << "Employee ID : " << endl;
		int id;
		cin >> id;
		girl.setID(id);
	}
	//exception handling
	catch (Employee::InvalidEmployeeNumber)
	{
		cout << "Error : An invalid ID number was entered." << endl;
	}

	//testing Production Worker class
	ProductionWorker worker;
	cout << "Worker name : " << endl;
	string workerName;
	cin >> workerName;
	worker.setName(workerName);
	cout << "The worker's name is : " << worker.getName() << endl;
	try
	{
		cout << "Worker pay rate : " << endl;
		double payRate;
		cin >> payRate;
		worker.setPayRate(payRate);
	}
	catch (ProductionWorker::InvalidPayRate)
	{
		cout << "Error : Invalid response. Pay rate must be greater than zero." << endl;
	}
	try
	{
		cout << "Enter 0 for night shift or 1 for day shift." << endl;
		int dayOrNight;
		cin >> dayOrNight;
		worker.setShift(dayOrNight);
	}
	catch (ProductionWorker::InvalidShift)
	{
		cout << "Error : Invalid entry" << endl;
	}

	system("pause");
	return 0;
}
