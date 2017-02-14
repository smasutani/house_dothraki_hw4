/*
 * =====================================================================================
 *
 *       Filename:  house_dothraki_hw4_task1.c
 *       	Usage:  ./house_dothraki_hw4_task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2017 10:22:21 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Orlando Salas (), orlandosalas@mail.weber.edu
 * =====================================================================================
 */

#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */

/* Main Program */
int main(void)
{
	double dnew;
	double d, x, w, l, E, I, b, h; // d = distance, x = distance from secure, w = weight,
							// E = modules of elasticity, I = second moment of inertia
							// b = beams base, h = beam height
	w = 200;
	l = 3;
	E = 187.2e6;
	b = 0.2;
	h = 0.3;
	I = b * h * h * h / (12);

	printf("Distance(ft)	Deflection(in)\n");
	printf("------------	--------------\n");

	for( x = 0.5; x <= l; x += 0.5)
	{
		d = w * (x*x) / ( 24 * E * I ) * ( (x*x) + 6 * (l*l) - 4 * l * x);
		dnew = d/12.0; // convert into inches
		printf("%.8lf\t%.8lf\n", x, dnew);
	}


	return 0;
}


