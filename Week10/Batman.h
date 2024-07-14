/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 14, 2024

Homework Week 10 -- Batman.h

*******************************************************************************/

#pragma once

#include "Superhero.h"
#include "ISuperRich.h"
#include <iostream>

class Batman : public Superhero, public ISuperRich {
	void displayAbilities() {
		std::cout << "\nBatman Abilities:\n";
	}
	void superRich() {
		std::cout << "- No superpowers, just super duper rich\n";
	}
	void gadgets() {
		std::cout << "- Lots of expensive gadgets and stuff\n";
	}
};
