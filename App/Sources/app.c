/**
 * @file app.c
 * @author Pieraqua
 * @brief Command line application that interfaces with all the other apps.
 * @date 2022-06-30
 */

#include <app.h>

/**
 *	@todo Tratar os argumentos do jeito certo
 *	@todo Fazer um menu de verdade
 */
int main( int argc, char *argv[ ] )
{
    int diceNum = 0;
    int diceSide = 0, result, currentroll;
    int i = 0;

    srand(time(NULL));

    if(argc >= 2)
    {
	diceSide =  atoi(argv[2]);
	diceNum = atoi(argv[1]);
	result = 0;
	printf("%dd%d - ", diceNum, diceSide);
	for(i = 0; i < diceNum; i++)
	{
	    currentroll = rollDice(1, diceSide);
            printf("%d, ", currentroll);
	    result += currentroll;
	}
	printf(" = %d\n", result);
	fflush(stdout);
    }

    return 0;
}
