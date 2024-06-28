#include "Rectangle.h"

void Rectangle::Size()
{
	result_ = width_ * height_;
}

void Rectangle::Draw()
{
	printf("%f\n", result_);
}
