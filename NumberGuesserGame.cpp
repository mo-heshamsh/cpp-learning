// a number guesser game
#include <iostream>

int main()
{
    int answers[4];
    int cash = 0;
    std::cout << "Welcome to number guesser game!";
    std::cout << "\nQ1: 1, 2, 3, ";
    std::cin >> answers[0];
    std::cout << "\nQ2: 1, 3, 5, ";
    std::cin >> answers[1];
    std::cout << "\nQ3: 10, 20, 30, ";
    std::cin >> answers[2];
    std::cout << "\nQ4: 100, 200, 300, ";
    std::cin >> answers[3];

    int sequences[4][4] = {
        {1, 2, 3, 4},
        {1, 3, 5, 7},
        {10, 20, 30, 40},
        {100, 200, 300, 400}
    };

    for (int i = 0; i < 4; i++)
    {
        if (answers[i] == sequences[i][3])
    {
        cash += 5;
    }

    }

    /* another way for loops
    // if (answers[0] == sequences[0][3])
    // {
    //     cash += 5;
    // }
    // if (answers[1] == sequences[1][3])
    // {
    //     cash += 5;
    // }
    // if (answers[2] == sequences[2][3])
    // {
    //     cash += 5;
    // }
    // if (answers[3] == sequences[3][3])
    // {
    //     cash += 5;
     } */

    std::cout << "\nYour total cash is: " << cash << "$ (out of 20$)";
    return 0;

}