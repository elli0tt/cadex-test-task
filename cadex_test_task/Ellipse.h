#pragma once
#include "Shape.h"
#define _USE_MATH_DEFINES
#include <math.h>

class Ellipse: public Shape {

public: 

	Ellipse(double smallRadius, double bigRadius) {
		this->smallRadius = smallRadius;
		this->bigRadius = bigRadius;
	}

	double getSmallRadius() {
		return smallRadius;
	}

	void setSmallRadius(double smallRadius) {
		this->smallRadius = smallRadius;
	}

	double getBigRadius() {
		return bigRadius;
	}

	void setBigRadius(double bigRadius) {
		this->bigRadius = bigRadius;
	}

	virtual double calculateArea() override {
		return M_PI * smallRadius * bigRadius;
	}

private:
	double smallRadius;
	double bigRadius;
};

