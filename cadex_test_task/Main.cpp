#include <vector>
#include "Ellipse.h"
#include "Circle.h"
#include "Shape.h"
#include <ctime>
#include "RandomShapesGenerator.h"
#include <algorithm>
#include <iostream>

template<typename Base, typename T>
inline bool instanceof(const T* ptr) {
	return dynamic_cast<const Base*>(ptr) != nullptr;
}

double calculateCirclesArea(const std::vector<Shape*>* shapes) {
	double result = 0.0;
	for (auto shape : *shapes) {
		if (instanceof<Circle>(shape)) {
			result += shape->calculateArea();
		}
	}
	return result;
}

int main() {

	RandomShapesGenerator generator = RandomShapesGenerator();
	std::vector<Shape*>* shapes = generator.generateRandomShapesVector();

	std::sort(shapes->begin(), shapes->end(), [](Shape* shape1, Shape* shape2) {
		return shape1->calculateArea() < shape2->calculateArea();
		});

	std::cout << "Circle area = " << calculateCirclesArea(shapes);
	
	return 0;
}