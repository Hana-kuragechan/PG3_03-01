#pragma once
#include "Shape.h"
class Circle:public IShape
{
	void Size() override;
	void Draw() override;
private:
	float radius_ = 5.0f;
	float result_;
};

