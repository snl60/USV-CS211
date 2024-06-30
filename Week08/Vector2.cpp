/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
June 30, 2024

Week 8 Assignment: Vector2 overload operators -- Vector2.cpp

*******************************************************************************/

#include "Vector2.h"

// Constructor definition
Vector2::Vector2(float x, float y) : x(x), y(y) {}

// Overload the '+' operator
Vector2 Vector2::operator+(const Vector2& other) const {
	return Vector2(this->x + other.x, this->y + other.y);
}

// Overload the '-' operator
Vector2 Vector2::operator-(const Vector2& other) const {
	return Vector2(this->x - other.x, this->y - other.y);
}
