/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
June 16, 2024

HW_Week6 Q3 -- CollegeCourse.cpp

*******************************************************************************/

#include "SL_CollegeCourse.h"
#include <iostream>

using namespace std;

// Constructor implementation
CollegeCourse::CollegeCourse(const string& CourseCode, const string& CourseName,
    const string& Major, const int& Credits) : CourseCode(CourseCode),
    CourseName(CourseName), Major(Major), Credits(Credits) {}

// Getter implementations
string CollegeCourse::GetCourseCode() const {
    return CourseCode;
}

string CollegeCourse::GetCourseName() const {
    return CourseName;
}

string CollegeCourse::GetMajor() const {
    return Major;
}

int CollegeCourse::GetCredits() const {
    return Credits;
}

// Setter implementations
void CollegeCourse::SetCourseCode(const string& NewCourseCode) {
    CourseCode = NewCourseCode;
}

void CollegeCourse::SetCourseName(const string& NewCourseName) {
    CourseName = NewCourseName;
}

void CollegeCourse::SetMajor(const string& NewMajor) {
    Major = NewMajor;
}

void CollegeCourse::SetCredits(const int NewCredits) {
    Credits = NewCredits;
}

// Method to display course information
void CollegeCourse::DisplayInfo() const {
    cout << "Course Information:" << endl;
    cout << "\tCourse Code: " << CourseCode << endl;
    cout << "\tCourse Name: " << CourseName << endl;
    cout << "\tMajor: " << Major << endl;
    cout << "\tCredits: " << Credits << endl;
}
