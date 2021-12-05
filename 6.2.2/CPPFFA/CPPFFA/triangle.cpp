#include "Triangle.h"
double Triangle::Geron(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	pl = sqrt(p * (p - a) * (p - b) * (p - c));
	return pl;
}