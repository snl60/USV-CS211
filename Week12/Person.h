/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 28, 2024

Homework Week 12: UpdatedAssignment_Files_Exceptions -- Person.h

*******************************************************************************/

#pragma once

#include <iostream>
#include <string>
#include "DateOOP.h"

class Person {
private:
	std::string name;
	Date DOB;
	int employeeID;
	bool invalidDOB;

public:
	Person();
	Person(const std::string& name, int month, int day, int year, int employeeID);

	std::string getName() const;
	Date getDOB() const;
	int getEmployeeID() const;
	bool isInvalidDOB() const;

	void setName(const std::string& name);
	void setDOB(int month, int day, int year);
	void setEmployeeID(int employeeID);

	void displayPerson() const;
};
