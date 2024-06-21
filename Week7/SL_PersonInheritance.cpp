/* Person : parent class/super class /base class
Attributes: String firstName, string lastName, string SSN, int age,
string email

 */

 /* Student: Person
 Attributes: string department, degree, string studentId, string yearOfStudy
 */

 /* Employee: Person
 Attribute: String employeeId, double salary */

 /* Faculty: Employee
 Attribute: string department */
#include "SL_PersonInheritance.h"
#include <iostream>
using namespace  std;

//Person implementation - functions defined
Person::Person(string fName, string lName, string SSNstr, string email) {
	firstName = fName;
	lastName = lName;
	SSN = SSNstr;
	email = email;

}

void Person::setAge(int age) {
	this->age = age;
}

int Person::getAge() {
	return age;
}

void Person::display() {
	cout << firstName << ":" << lastName << endl;

}

//TO DO HOMEWRK: Fill in the student functions based on the Employee and Faculty 
//code below
Student::Student(string fName, string lName, string SSNstr, string email, 
	string maj,	string deg, string sID, string year) 
	: Person(fName, lName, SSNstr, email) {

	major = maj;
	degree = deg;
	studentID = sID;
	yearOfStudy = year;
}

void Student::display() {
	Person::display();
	cout << studentID << ":" << major << ":" << degree << ":" << yearOfStudy
		 << endl;
}


Employee::Employee(string fName, string lName, string SSNstr, string email,
	string empId, float pay) : Person(fName, lName, SSNstr, email) {
	this->salary = pay;
	this->employeeId = empId;
}

void Employee::setEmployeeId(string str) {
	employeeId = str;
}

string Employee::getEmployeeId() {
	return employeeId;
}

void Employee::display() {
	Person::display();
	cout << employeeId << ":" << salary << endl;
}


Faculty::Faculty(string fName, string lName, string SSNstr, string email,
	string empId, float pay, string dept) : Employee(fName, lName, SSNstr, email, empId, pay) {
	this->department = dept;
}


void Faculty::display() {
	Employee::display();
	cout << department << endl;
}
