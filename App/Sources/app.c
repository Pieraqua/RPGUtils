/**
 * @file app.c
 * @author Pieraqua
 * @brief Command line application that interfaces with all the other apps.
 * @date 2022-06-30
 */

#include <app.h>

int main( int argc, char *argv[ ] )
{
    int diceNum = 0;
    int diceSide = 0;

    if(argc >= 2){
        printf(rollDice(diceSide, diceNum));
        fflush(stdout);
    }

    return 0;
}