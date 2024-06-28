#include "Circle.h"

void Circle::Size()
{
	result_=radius_* radius_* 3.14;
}

void Circle::Draw()
{
	printf("%f\n", result_);
}
