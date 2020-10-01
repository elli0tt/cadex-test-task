#pragma once
#include "Shape.h"
#define _USE_MATH_DEFINES
#include <math.h>

class Circle : public Shape {

public: 

	Circle(double radius = 0.0) {
		this->radius = radius;
	}

	double getRadius() {
		return radius;
	}

	void setRadius(double radius) {
		this->radius = radius;
	}

	virtual double calculateArea() override {
		return M_PI * pow(radius, 2);
	}
		 
private:
	double radius;
};