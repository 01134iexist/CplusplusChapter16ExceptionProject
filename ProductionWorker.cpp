#pragma once
#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include "employee.h"
#include <string>
using namespace std;

class ProductionWorker : public Employee
{
public:
	int shift;
	double payRate;

	//default constructor
	ProductionWorker() : Employee()
	{
		shift = 0;
		payRate = 0.0;
	}
	//exception classes
	class InvalidShift
	{};
	class InvalidPayRate
	{};
	//constructor
	ProductionWorker(int s, double p) : Employee(employeeName, employeeID, hireDate)
	{
		shift = s;
		payRate = p;
	}
	//mutator functions
	void setShift(int shift);
	void setPayRate(double rate);
	//accessor functions 
	double getPayRate() const
	{
		return payRate;
	}
	int getShift() const
	{
		return shift;
	}
};
#endif
