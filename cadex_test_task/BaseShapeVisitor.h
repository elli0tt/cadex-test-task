#pragma once

class Circle;
class Ellipse;

class MyBaseShapeVisitor {
public:
	virtual void visitCircle(Circle circle) = 0;
	virtual void visitEllipse(Ellipse ellipse) = 0;

	virtual ~MyBaseShapeVisitor() {}
};

