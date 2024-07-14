/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
July 14, 2024

Homework Week 10 -- Superheroes.cpp

*******************************************************************************/

#include <iostream>
#include <vector>
#include "Superhero.h"
#include "Superman.h"
#include "Flash.h"
#include "Aquaman.h"
#include "ProfessorX.h"
#include "Batman.h"
#include "ISuperStrength.h"
#include "IFly.h"
#include "IXRayVision.h"
#include "ISuperSpeed.h"
#include "ISuperEndurance.h"
#include "ISuperRich.h"
#include "IUnderwaterBreathing.h"
#include "ISeaCreatureCommunication.h"
#include "ITelepathy.h"

int main()
{
    std::vector<Superhero*> superheroes = {
        new Superman(),
        new Flash(),
        new Aquaman(),
        new ProfessorX(),
        new Batman()
    };

    for (auto superhero : superheroes) {
        superhero->displayAbilities();

        if (dynamic_cast<ISuperStrength*>(superhero)) {
            dynamic_cast<ISuperStrength*>(superhero)->superStrength();
        }
        if (dynamic_cast<IFly*>(superhero)) {
            dynamic_cast<IFly*>(superhero)->fly();
        }
        if (dynamic_cast<IXRayVision*>(superhero)) {
            dynamic_cast<IXRayVision*>(superhero)->xRayVision();
        }
        if (dynamic_cast<ISuperSpeed*>(superhero)) {
            dynamic_cast<ISuperSpeed*>(superhero)->superSpeed();
        }
        if (dynamic_cast<ISuperEndurance*>(superhero)) {
            dynamic_cast<ISuperEndurance*>(superhero)->superEndurance();
        }
        if (dynamic_cast<IUnderwaterBreathing*>(superhero)) {
            dynamic_cast<IUnderwaterBreathing*>(superhero)->underwaterBreathing();
        }
        if (dynamic_cast<ISeaCreatureCommunication*>(superhero)) {
            dynamic_cast<ISeaCreatureCommunication*>(superhero)->seaCreatureCommunication();
        }
        if (dynamic_cast<ITelepathy*>(superhero)) {
            dynamic_cast<ITelepathy*>(superhero)->mindControl();
            dynamic_cast<ITelepathy*>(superhero)->mindReading();
        }
        if (dynamic_cast<ISuperRich*>(superhero)) {
            dynamic_cast<ISuperRich*>(superhero)->superRich();
            dynamic_cast<ISuperRich*>(superhero)->gadgets();
        }
    }
    return 0;
}
