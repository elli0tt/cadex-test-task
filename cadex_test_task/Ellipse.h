#pragma once
#include "Shape.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include "BaseShapeVisitor.h"

class Ellipse: public Shape {

public: 

	Ellipse(double smallRadius = 0.0, double bigRadius = 0.0) {
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

	void accept(MyBaseShapeVisitor* visitor) {
		visitor->visitEllipse(*this);
	}

private:
	double smallRadius;
	double bigRadius;
};

