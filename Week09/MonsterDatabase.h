/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 7, 2024

Week 9 Assignment: Create a monster database -- MonsterDatabase.h

*******************************************************************************/

#pragma once

#include <iostream>
#include <map>
#include <string>
#include <limits>
#include <iomanip>

// Define the Monster structure
struct Monster {
    std::string name;
    int monsterID;
    int health;
    int attack;
    int armor;
};

// Function declarations
void addMonster(std::map<std::string, Monster>& monsters);
Monster* findMonster(std::map<std::string, Monster>& monsters, const std::string& name);
void displayMonster(const Monster& monster);
void displayDatabase(const std::map<std::string, Monster>& monsters);
