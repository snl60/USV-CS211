/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 7, 2024

Week 9 Assignment: Create a monster database -- MonsterDatabase.cpp

*******************************************************************************/

#include "MonsterDatabase.h"

int monsterIDCount = 1000; // Tracks # of monsters in db to ensure unique ID.

// Function to add a monster to the database
void addMonster(std::map<std::string, Monster>& monsters) {
    std::string name;
    int health, attack, armor, monsterID;
    
    std::cout << "\nInput the monster's name: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer
    std::getline(std::cin, name);

    // Check if the monster already exists
    if (monsters.find(name) != monsters.end()) {
        std::cout << "\nError: A monster with the name \"" << name 
                  << "\" already exists in the database.\n\n";
        return;
    }

    monsterID = ++monsterIDCount;

    while (true) {
        std::cout << "Input the monster's health: ";
        std::cin >> health;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter and integer for health." << std::endl;
        }
        else {
            break;
        }
    }

    while (true) {
        std::cout << "Input the monster's attack: ";
        std::cin >> attack;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter and integer for attack." << std::endl;
        }
        else {
            break;
        }
    }

    while (true) {
        std::cout << "Input the monster's armor: ";
        std::cin >> armor;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter and integer for armor." << std::endl;
        }
        else {
            break;
        }
    }

    monsters[name] = Monster{ name, monsterID, health, attack, armor };

    std::cout << "\nAdded \"" << name << "\" to the database.\n" << std::endl;
}

// Function to search for a monster by name in the database.
Monster* findMonster(std::map<std::string, Monster>& monsters, const std::string& name) {
    auto it = monsters.find(name);
    if (it != monsters.end()) {
        return &it->second;
    }
    else {
        std::cout << "\nMonster does not exist in the database.\n" << std::endl;
    }
}

// Function to display details of a single monster.
void displayMonster(const Monster& monster) {
    std::cout << "\nMonster ID: " << monster.monsterID
        << "\nName: " << monster.name
        << "\nHealth: " << monster.health
        << "\nAttack: " << monster.attack
        << "\nArmor: " << monster.armor << "\n\n";
}

// Function to display the entire monsters database.
void displayDatabase(const std::map<std::string, Monster>& monsters) {
    std::cout << "\nMonsters Database:\n\n";
    for (const auto& it : monsters) {
        std::cout << "Monster ID: " << it.second.monsterID
                  << "\nName: " << it.second.name 
                  << "\nHealth: " << it.second.health 
                  << "\nAttack: " << it.second.attack 
                  << "\nArmor: " << it.second.armor << "\n\n";
    }
}
