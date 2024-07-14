/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 14, 2024

Homework Week 10 -- Aquaman.h

*******************************************************************************/

#pragma once

#include "Superhero.h"
#include "ISuperStrength.h"
#include "IUnderwaterBreathing.h"
#include "ISeaCreatureCommunication.h"
#include <iostream>

class Aquaman : public Superhero, public ISuperStrength, public IUnderwaterBreathing, public ISeaCreatureCommunication {
	void displayAbilities() override {
		std::cout << "\nAquaman Abilities:\n";
	}
	void superStrength() override {
		std::cout << "- Super Strength\n";
	}
	void underwaterBreathing() override {
		std::cout << "- Underwater Breathing\n";
	}
	void seaCreatureCommunication() override {
		std::cout << "- Sea Creature Communication\n";
	}
};
