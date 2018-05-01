#include "employee.h"

void Employee::setID(int id)
{
	if (id > 0 && id < 9999)
		employeeID = id;
	else
		throw InvalidEmployeeNumber();
}
