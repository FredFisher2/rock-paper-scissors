#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int pWins, int cWins) {
    int pChoice{};
    int cChoice{};

    //Gets players choice
    std::cout << "Choose your weapon! \n";
    std::cin >> pChoice;

    //Gets CPU's choice
    srand(time(0));
    cChoice = rand() % 3;

    //Announces CPU choice and determines winner
    if (cChoice == pChoice) {
        std::cout << "You chose the same thing! \n" << "No points awarded... \n";
    } else if (pChoice == 0) {
            if (cChoice == 1) {
            std::cout << "CPU chose paper! \n" << "You lost... +1 point to CPU \n";
            cWins = cWins + 1;
        } else {
            std::cout << "CPU chose scissors! \n" << "You won! +1 point to you! \n";
            pWins = pWins + 1;
        }
    } else if (pChoice == 1) {
        if (cChoice == 0) {
            std::cout << "CPU chose rock! \n" << "You won! +1 point to you! \n";
            pWins = pWins + 1;
        } else {
            std::cout << "CPU chose scissors! \n" << "You lost... +1 point to CPU \n";
            cWins = cWins + 1;
        }
    } else if (pChoice == 2) {
        if (cChoice == 0) {
            std::cout << "CPU chose rock! \n" <<  "You lost... +1 point to CPU \n";
            cWins = cWins + 1;
        } else {
            std::cout << "CPU chose paper! \n" << "You won! +1 point to you! \n";
            pWins = pWins + 1;

        }
    }

    std::cout << "Player: " << pWins << " CPU: " << cWins << '\n' << '\n';
    game(pWins, cWins);

    return 0;
}

int main() {

    std::cout << "Rock, Paper, Scissors!" << '\n' << "0 = Rock" << '\n' << "1 = Paper" << '\n' << "2 = Scissors" << '\n';
    game(0, 0);
    return 0;
}
