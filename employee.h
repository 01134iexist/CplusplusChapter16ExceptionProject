#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;


class Date
{
protected:
	int month;
	int day;
	int year;
public:
	//default constructor
	Date()
	{
		month = 0; day = 0; year = 0;
	}
	//constructor
	Date(int m, int d, int y)
	{
		month = m;
		day = d;
		year = y;
	}
	//accessor functions
	int getDay() const
	{
		return day;
	}
	int getMonth() const
	{
		return month;
	}
	int getYear() const
	{
		return year;
	}
	//mutator functions
	void setDay(int d)
	{
		day = d;
	}
	void setMonth(int m)
	{
		month = m;
	}
	void setYear(int y)
	{
		year = y;
	}
};

class Employee
{
protected:
	string employeeName;
	int employeeID;
	Date hireDate;
public:
	//default constructor
	Employee()
	{
		employeeName = ""; employeeID = 0;
	}
	//exception class
	class InvalidEmployeeNumber
	{};
	//constructor
	Employee(string name, int ID, Date date)
	{
		employeeName = name;
		employeeID = ID;
		hireDate = date;
	}
	//accessor functions
	string getName() const
	{
		return employeeName;
	}
	int getID() const
	{
		return employeeID;
	}
	Date getDate() const
	{
		return hireDate;
	}
	//mutator functions
	void setName(string n)
	{
		employeeName = n;
	}
	void setID(int i);
	void setDate(Date d)
	{
		hireDate = d;
	}
};


#endif
