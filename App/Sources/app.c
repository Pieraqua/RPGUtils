/**
 * @file app.c
 * @author Pieraqua
 * @brief Command line application that interfaces with all the other apps.
 * @date 2022-06-30
 */

#include <app.h>

int main( int argc, char *argv[ ] )
{
    int diceNum = argv[0];
    int diceSide = argv[1];

    printf(rollDice(diceSide, diceNum));
    fflush();

    return 0;
}