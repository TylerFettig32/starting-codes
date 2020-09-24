/*	Name:  Tyler J Fettig
	Problem:  Learning to code division problems
	Pseudocode:  My agaretham is to know how to use %d for my int decimals. and to also output messages to the screen and do some math
	Notes: int are inportant
	Maintenance log:
		Date:		Done:
		9/24/2020	Everything on this code
*/
	// some comment
#include <conio.h>
#include <stdio.h>

int main()
{
	printf("Division problems.\n\n");	
	int t = 54;
	int b = 2;
	int c = 9;
	float w = 120;
	float y = 12;
	float z = 58;

	c = t / b;
	printf("t / b = %d\n", c);	
	z = w / y;
	printf("w / y = %f\n", z);	
	c = w / y;
	printf("w / y = %d\n", c);	
	z = t / b;
	printf("t / b = %f\n", z);	
	c = t / y;
	printf("t / y = %d\n", c);	
	z = w / b;
	printf("w / b = %f\n", z);
	c = t / (int) y;
	printf("t / y = %d\n", c);
	z = w / (float) b;
	printf("w / b = %f\n", z);
	int d = 0;

	c = t / b;
	printf("t / b = %d\n", c);
	d = t % b;
	printf("t %% b = %d\n", d);

	printf("Press the any key to continue.\n");

	return 0;
}
