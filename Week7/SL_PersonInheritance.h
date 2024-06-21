#ifndef SL_PERSONINHERITANCE_H_
#define SL_PERSONINHERITANCE_H_

#include <string>

using namespace std;

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



class Person
{
private:
    string firstName, lastName, SSN, email;
    int age;
public:

    Person(string fName, string lName, string SSNstr, string eMail);
    void setAge(int age);
    int getAge();
    void display();
};


// Student class with inheritance from Person class
class Student : public Person
{
    private:
        string major;
        string degree;
        string studentID;;
        string yearOfStudy;

   public:
        Student(string fName, string lName, string SSNstr, string email, 
            string maj, string deg, string sID, string year);
        void display();
};


class Employee : public Person {

private:
    string employeeId;
    float salary;
public:
    Employee(string fName, string lName, string SSNstr, string email,
        string empId, float pay);
    void setSalary(float salary);
    float getSalary();
    void setEmployeeId(string str);
    string getEmployeeId();
    void display();

};


class Faculty : private Employee {

private:
    string department;
public:
    Faculty(string fName, string lName, string SSNstr, string email,
        string empId, float pay, string dept);
    void display();
};


#endif //SL_PERSONINHERITANCE_H_
