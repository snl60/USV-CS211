/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 28, 2024

Homework Week 12: UpdatedAssignment_Files_Exceptions -- DateOOP.h

*******************************************************************************/

#pragma once

#include <iostream>
#include <stdexcept>

class DateException : public std::runtime_error {
public:
	DateException(const std::string& message) : std::runtime_error(message) {}
};


class Date {
private:
	int month;
	int day;
	int year;

public:
	Date(int month, int day, int year);
	void displayDate() const;
	int getMonth() const { return month; }
	int getDay() const { return day; }
	int getYear() const { return year; }
};
