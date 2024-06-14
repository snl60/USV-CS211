/*******************************************************************************

Scott Lopez
Professor Gale
CS211 - Code 1: Intermediate Programming
June 16, 2024

HW_Week6 Q1 -- Stones.cpp

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ComputerTurn(int& Stones) {
    int StonesPicked = rand() % 3 + 1;
    
    Stones -= StonesPicked;
    
    cout << "Computer's turn. Computer picks up " << StonesPicked 
         << " stone(s). " << Stones << " stones remaining.\n" << endl;
}

void PlayerTurn(int& Stones) {
    int StonesPicked;
    do {
        cout << "Your turn. Pick 1, 2, or 3 stones: ";
        cin >> StonesPicked;
    } while (StonesPicked < 1 || StonesPicked > 3 || StonesPicked > Stones);
    
    Stones -= StonesPicked;
    
    cout << "You have picked up " << StonesPicked << " stone(s). "
         << Stones << " stones remaining.\n" << endl;
}

int main()
{
    srand(time(0));
    
    int Stones = 21;
    
    cout << "Welcome to the Game of Stones!\n\n"
            "Rules of the Game:\n\n"
            "\tThe game starts with 21 stones in a pile.\n"
            "\tEach player picks between 1, 2, or 3 stones each turn.\n"
            "\The player that picks up the last stone is the Winner!\n"
            "\tThe Computer takes the first turn.\n\n"
            "\tENJOY THE GAME!\n" << endl;

    while (Stones > 0) {
        ComputerTurn(Stones);
        if (Stones <= 0) {
            cout << "Computer Wins!" << endl;
            break;
        }

        PlayerTurn(Stones);
        if (Stones <= 0) {
            cout << "You Win!" << endl;
            break;
        }
    }

    return 0;
}
