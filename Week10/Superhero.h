/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 14, 2024

Homework Week 10 -- Superhero.h

*******************************************************************************/

#pragma once

class Superhero {
public:
	virtual ~Superhero() = default;
	virtual void displayAbilities() = 0;
};
