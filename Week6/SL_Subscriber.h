/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
June 16, 2024

HW_Week6 Q2 -- Subscriber.h

*******************************************************************************/

#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <string>

using namespace std;

class Subscriber {
private:
    string FirstName;
    string LastName;
    string Username;
    string Email;
    string CreditCard;

public:
    // Constructor
    Subscriber(const string& FirstName, const string& LastName,
        const string& Username, const string& Email, const string& CreditCard);

    // Getters
    string GetFirstName() const;
    string GetLastName() const;
    string GetUsername() const;
    string GetEmail() const;
    string GetCreditCard() const;

    // Setters
    void SetFirstName(const string& SubFirstName);
    void SetLastName(const string& SubLastName);
    void SetUsername(const string& SubUsername);
    void SetEmail(const string& SubEmail);
    void SetCreditCard(const string& SubCreditCard);

    void DisplayInfo() const;
};

#endif
