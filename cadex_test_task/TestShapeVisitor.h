#pragma once
#include "BaseShapeVisitor.h"
#include "Circle.h"
#include "Ellipse.h"
#include <iostream>

class TestShapeVisitor : public MyBaseShapeVisitor {
	virtual void visitCircle(Circle circle) override {
		std::cout << "TestShapeVisitor visitCircle is called" << std::endl;
	}

	virtual void visitEllipse(Ellipse circle) override {
		std::cout << "TestShapeVisitor visitEllipse is called" << std::endl;
	}
};

