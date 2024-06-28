#pragma once]
#include "Shape.h"
class Rectangle:public IShape
{
	void Size() override;
	void Draw() override;
private:
	float width_ = 5.0f;
	float height_ = 3.0f;
	float result_;
};

