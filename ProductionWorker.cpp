#include "ProductionWorker.h"

void ProductionWorker::setShift(int s)
{
	if (s == 0 || s == 1)
		shift = s;
	else
		throw InvalidShift();
}

void ProductionWorker::setPayRate(double r)
{
	if (r > 0)
		payRate = r;
	else
		throw InvalidPayRate();
}
