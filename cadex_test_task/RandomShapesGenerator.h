#pragma once
#include <vector>
#include "Shape.h"
#include <ctime>
#include "Circle.h"
#include "Ellipse.h"

class RandomShapesGenerator {

public:

	RandomShapesGenerator() {
		srand(time(0));
	}

	std::vector<Shape*>* generateRandomShapesVector() {
		int randomSize = rand() % 30;
		std::vector<Shape*>* result = new std::vector<Shape*>();
		for (int i = 0; i < randomSize; ++i) {
			if (rand() % 2 == 0) {
				result->push_back(createRandomEllipse());
			} else {
				result->push_back(createRandomCircle());
			}
		}
		return result;
	}

private:
	Circle* createRandomCircle() {
		return new Circle(rand() + 1.0);
	}

	Ellipse* createRandomEllipse() {
		return new Ellipse(rand() + 1.0, rand() + 1.0);
	}

};