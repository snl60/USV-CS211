/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
June 30, 2024

Week 8 Assignment: Vector2 overload operators -- Vector2.h

*******************************************************************************/

#pragma once

class Vector2 {
public:
	float x, y;

	// Constructor
	Vector2(float x = 0, float y = 0); // Defaults to (0, 0)

	// Operator overloading
	Vector2 operator+(const Vector2& other) const;
	Vector2 operator-(const Vector2& other) const;
};
