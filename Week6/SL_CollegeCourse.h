/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
June 16, 2024

HW_Week6 Q3 -- CollegeCourse.h

*******************************************************************************/

#ifndef SL_COLLEGECOURSE_H
#define SL_COLLEGECOURSE_H

#include <string>

using namespace std;

class CollegeCourse {
private:
    string CourseCode;
    string CourseName;
    string Major;
    int Credits;

public:
    // Constructor
    CollegeCourse(const string& CourseCode, const string& CourseName,
        const string& Major, const int& Credits);

    // Getters
    string GetCourseCode() const;
    string GetCourseName() const;
    string GetMajor() const;
    int GetCredits() const;

    // Setters
    void SetCourseCode(const string& NewCourseCode);
    void SetCourseName(const string& NewCourseName);
    void SetMajor(const string& NewMajor);
    void SetCredits(const int NewCredits);

    void DisplayInfo() const;
};

#endif
