/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
August 4, 2024

Finals Prep Week 13, Q10 -- triangle.cpp

*******************************************************************************/

#include <iostream>

class Triangle {
private:
	float side1;
	float side2;
	float side3;

public:
	Triangle(float side1, float side2, float side3)
		: side1(side1), side2(side2), side3(side3) {
	
		if (!isValid()) {
			throw std::invalid_argument(" - Invalid triangle");
		}
	}

	bool isValid() {
		if (side1 + side2 > side3 &&
			side1 + side3 > side2 &&
			side2 + side3 > side1) {
			return true;
		}
		else {
			return false;
		}
	}

	void display() {
		std::cout << side1 << ", " << side2 << ", " << side3 << std::endl;
	}
};

int main() {
	float testTriangles[5][3] = {
		{3, 8, 5},
		{10, 5, 6},
		{6, 12, 8},
		{9, 4, 3},
		{7, 16, 10}
	};

	for (auto testTriangle : testTriangles) {
		try {
			Triangle test(testTriangle[0], testTriangle[1], testTriangle[2]);
			test.display();
		}
		catch (std::invalid_argument& e) {
			std::cout << testTriangle[0] << ", " << testTriangle[1] << ", " 
					  << testTriangle[2] << e.what() << std::endl;
		}
	}

	return 0;
}
