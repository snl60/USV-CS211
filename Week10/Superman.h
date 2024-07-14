/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 14, 2024

Homework Week 10 -- Superman.h

*******************************************************************************/

#pragma once

#include "Superhero.h"
#include "ISuperStrength.h"
#include "ISuperSpeed.h"
#include "IFly.h"
#include "IXRayVision.h"
#include <iostream>

class Superman : public Superhero, public ISuperStrength, public ISuperSpeed, public IFly, public IXRayVision {
public:
	void displayAbilities() override {
		std::cout << "\nSuperman Abilities:\n";
	}
	void superStrength() override {
		std::cout << "- Super Strength\n";
	}
	void superSpeed() override {
		std::cout << "- Super Speed\n";
	}
	void fly() override {
		std::cout << "- Flying\n";
	}
	void xRayVision() override {
		std::cout << "- X-Ray Vision\n";
	}
};
