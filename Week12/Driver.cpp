/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 28, 2024

Homework Week 12: UpdatedAssignment_Files_Exceptions -- Driver.cpp

*******************************************************************************/

#include "Person.h"
#include <vector>
#include <fstream>

int main()
{
    std::vector<Person*> persons;

    persons.push_back(new Person("Jerry Garcia", 8, 1, 1942, 1001));
    persons.push_back(new Person("Bob Weir", 10, 16, 1947, 1002));
    persons.push_back(new Person("Phil Lesh", 3, 15, 1940, 1003));
    persons.push_back(new Person("Keith Godchaux", 7, 19, 1948, 1004));
    persons.push_back(new Person("Bill Kreutzmann", 5, 7, 1946, 1005));
    persons.push_back(new Person("Mickey Hart", 9, 11, 1943, 1006));
    persons.push_back(new Person("Invalid DOB Test Person", 0, 0, 0, 1007));
    
    std::ofstream outFile("personDetails.txt");

    for (const auto& person : persons) {
        outFile << "Name: " << person->getName() << std::endl;
        outFile << "Date of Birth: ";
        Date DOB = person->getDOB();
        outFile << DOB.getMonth() << "/" << DOB.getDay() << "/" << DOB.getYear();
        if (person->isInvalidDOB()) {
            outFile << " (Invalid Date)";
        }
        outFile << std::endl;
        outFile << "Employee ID: " << person->getEmployeeID() << "\n" << std::endl;
    }

    outFile.close();

    for (auto& person : persons) {
        delete person;
    }

    return 0;
}
