/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 14, 2024

Homework Week 10 -- ProfessorX.h

*******************************************************************************/

#pragma once

#include "Superhero.h"
#include "ITelepathy.h"
#include <iostream>

class ProfessorX : public Superhero, public ITelepathy {
	void displayAbilities() override {
		std::cout << "\nProfessor X Abilities:\n";
	}
	void mindControl() override {
		std::cout << "- Mind Control\n";
	}
	void mindReading() override {
		std::cout << "- Mind Reading\n";
	}
};
