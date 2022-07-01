/**
 * @file diceroller.c
 * 
 * @author Pieraqua
 * @brief Dice roller utility for the command line.
 * 
 * @date 2022-06-30
 * 
 */

#include <diceroller.h>

/**
 * @brief Rolls and @p diceSide sided dice a @p diceSide number of times.
 * 
 * @param diceNum Number of times to roll the dice.
 * @param diceSide Number of sides in the dice.
 * 
 * @return the number rolled
 */
int rollDice(int diceNum, int diceSide)
{
    int result = 0, i = 0;

    for(i = 0; i < diceNum; i++)
    {
        result += rand()%diceSide + 1;
    }

    return result;
}
