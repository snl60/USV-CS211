/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 14, 2024

Homework Week 10 -- Flash.h

*******************************************************************************/

#pragma once

#include "Superhero.h"
#include "ISuperSpeed.h"
#include "ISuperStrength.h"
#include "ISuperEndurance.h"
#include <iostream>

class Flash : public Superhero, public ISuperSpeed, public ISuperStrength, public ISuperEndurance {
public:
	void displayAbilities() override {
		std::cout << "\nFlash Abilities:\n";
	}
	void superSpeed() override {
		std::cout << "- Super Speed\n";
	}
	void superStrength() override {
		std::cout << "- Super Strength\n";
	}
	void superEndurance() override {
		std::cout << "- Super Endurance\n";
	}
};
