/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 28, 2024

Homework Week 12: UpdatedAssignment_Files_Exceptions -- DateOOP.cpp

*******************************************************************************/

#include <iostream>
#include "DateOOP.h"

Date::Date(int month, int day, int year) : month(month), day(day), year(year) {
	if (month < 1 || month > 12 || day < 1 || day > 31 || year < 1) {
		throw DateException("Invalid date provided");
	}
}

void Date::displayDate() const {
	std::cout << month << "/" << day << "/" << year << std::endl;
}
