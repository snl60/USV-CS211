/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 28, 2024

Homework Week 12: UpdatedAssignment_Files_Exceptions -- Person.cpp

*******************************************************************************/

#include "Person.h"

Person::Person() : name(""), DOB(Date(1, 1, 1999)), employeeID(0) {}

Person::Person(const std::string& name, int month, int day, int year, int employeeID)
	: name(name), DOB(DOB), employeeID(employeeID), invalidDOB(false) {
	try {
		this->DOB = Date(month, day, year);
	}
	catch (const DateException& exception) {
		this->DOB = Date(1, 1, 1999);
		invalidDOB = true;
	}
}

std::string Person::getName() const {
	return name;
}

Date Person::getDOB() const {
	return DOB;
}

int Person::getEmployeeID() const {
	return employeeID;
}

bool Person::isInvalidDOB() const {
	return invalidDOB;
}

void Person::setName(const std::string& name) {
	this->name = name;
}

void Person::setDOB(int month, int day, int year) {
	try {
		this->DOB = Date(month, day, year);
		invalidDOB = false;
	}
	catch (const DateException& exception) {
		this->DOB = Date(1, 1, 1999);
		invalidDOB = true;
	}
}

void Person::setEmployeeID(int employeeID) {
	this->employeeID = employeeID;
}

void Person::displayPerson() const {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Date of Birth: ";
	DOB.displayDate();
	if (invalidDOB) {
		std::cout << " (Invalid Date)" << std::endl;
	}
	std::cout << "Employee ID: " << employeeID << "\n" << std::endl;
}
