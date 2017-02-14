/*
 * =====================================================================================
 *
 *       Filename:  house_dothraki_hw4_task2.c
 *       	Usage:  ./house_dothraki_hw4_task2.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2017 10:16:46 PM
 *       Compiler:  gcc -Wall -Werr
 *         Author:  Sherry Masutani (), sherrymasutani@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>
#define GAME 3
#define BOWLER 5

int main()
{
	float game, total;

	for (int i = 1; i <= BOWLER ; i++)
	{
		for (int j = 1; j <= GAME ; j++)
		{
			printf("Enter the score for game %d for bowler %d: ", j, i);
			scanf("%f", &game);
			total += game;
		}

		printf("The average for bowler %d is %f\n", i, total/3);
		total = 0;

	}
	return 0;
}
