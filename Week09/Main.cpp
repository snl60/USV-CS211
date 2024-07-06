/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 7, 2024

Week 9 Assignment: Create a monster database -- Main.cpp

*******************************************************************************/

#include "MonsterDatabase.h"

int main()
{
    std::map<std::string, Monster> monsterDatabase;

    int menuChoice;
    bool menuLoop = true;

    while (menuLoop) {
        std::cout << "Welcome to the monster database! What would you like to do?"
            "\n\t1. Add Monster"
            "\n\t2. Find Monster"
            "\n\t3. Display Full Database"
            "\n\t4. Exit\n" << std::endl;

        std::cin >> menuChoice;

        // Check for valid input
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nInvalid input. Please enter a number from the list.\n" << std::endl;
            continue;
        }

        if (menuChoice == 1) {
            addMonster(monsterDatabase);
        }
        else if (menuChoice == 2) {
            std::string name;
            std::cout << "\nWhich monster are you looking for? ";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer
            std::getline(std::cin, name);
            Monster* foundMonster = findMonster(monsterDatabase, name);
            if (foundMonster) {
                std::cout << "\n\"" << name << "\" exists in the database.\n";
                displayMonster(*foundMonster);
            }
        }
        else if (menuChoice == 3) {
            displayDatabase(monsterDatabase);
        }
        else if (menuChoice == 4) {
            // Exit program
            std::cout << "\nExiting..." << std::endl;
            break;
        }
        else {
            std::cout << "\nInvalid entry." << std::endl;
        }
    }

    return 0;
}
