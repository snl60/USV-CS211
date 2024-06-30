/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
June 23, 2024

Inheritance Class Assignment -- Driver.cpp

*******************************************************************************/

#include "SL_PersonInheritance.h"
#include <iostream>

using namespace std;

int main(void) {

    Person p1("Adam", "Smith", "1233", "abc@a.org");
    p1.display();

    Employee emp("Peter", "Parker", "1233", "abc@a.org", "EMP_101", 29000.45);
    emp.display();

    Faculty director("Peter", "Parker", "1233", "abc@a.org", "EMP_101", 29000.45, "Physics");
    director.display();

    // Student instance s1
    Student s1("Clark", "Kent", "1234", "ckent@dc.com", "Computer Science", "Bachelors", "S_001", "Freshman");
    s1.display();

    // Student instance s2
    Student s2("Bruce", "Wayne", "5678", "bwayne@dc.com", "Game Engineering", "Masters", "S_002", "Postgraduate");
    s2.display();
}
