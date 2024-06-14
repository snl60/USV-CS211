/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
June 16, 2024

HW_Week6 Q2 -- Subscriber.cpp

*******************************************************************************/

#include "SL_Subscriber.h"
#include <iostream>

using namespace std;

// Constructor
Subscriber::Subscriber(const string& FirstName, const string& LastName,
    const string& Username, const string& Email, const string& CreditCard)
    : FirstName(FirstName), LastName(LastName), Username(Username),
    Email(Email), CreditCard(CreditCard) {}

// Getters
string Subscriber::GetFirstName() const {
    return FirstName;
}

string Subscriber::GetLastName() const {
    return LastName;
}

string Subscriber::GetUsername() const {
    return Username;
}

string Subscriber::GetEmail() const {
    return Email;
}

string Subscriber::GetCreditCard() const {
    return CreditCard;
}

// Setters
void Subscriber::SetFirstName(const string& SubFirstName) {
    FirstName = SubFirstName;
}

void Subscriber::SetLastName(const string& SubLastName) {
    LastName = SubLastName;
}

void Subscriber::SetUsername(const string& SubUsername) {
    Username = SubUsername;
}

void Subscriber::SetEmail(const string& SubEmail) {
    Email = SubEmail;
}

void Subscriber::SetCreditCard(const string& SubCreditCard) {
    CreditCard = SubCreditCard;
}

void Subscriber::DisplayInfo() const {
    cout << "Subscriber Information:" << endl;
    cout << "\tFirst Name: " << FirstName << endl;
    cout << "\tLast Name: " << LastName << endl;
    cout << "\tUsername: " << Username << endl;
    cout << "\tEmail: " << Email << endl;
    cout << "\tCredit Card: " << CreditCard << endl;
}
