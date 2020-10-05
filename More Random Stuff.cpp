/******************************************************************************
Name:  Tyler Fettig
	Problem:  More Random Stuff
	Pseudocode:  I dont have one
Output app title to the screen
Output instructions to the screen
Declare and initialize variables
Get input from the user
Determine number of vans by dividing people by capacity
Determine number of people walking by finding remainder (modulus)
Output results to the screen in a way the user can read
	Notes: hard to figure out but then easy
	Maintenance log:
		Date:		Done:
		10/05/2020	Everything


*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    printf("Random Numbers \n \n \n");
    int min;
    int max;
    int rn;
    printf("input low number \n");
    cin >> min;
    fseek(stdin, 0, SEEK_END);
    printf("input high number \n");
    scanf("%d", & max);
    fseek(stdin, 0, SEEK_END);
    rn = min + rand() % (max - min + 1);
    printf("Random number : %d \n", rn);
    float rf = ((float) rand() / (float) RAND_MAX);
    printf("Random Float : %f \n", rf);
    char minc;
    char maxc;
    printf("A-Z \n");
    cin >> minc;
    fseek(stdin, 0, SEEK_END);
    printf("A-Z \n");
    //scanf("%c", & maxc);
    cin >> maxc;
    fseek(stdin, 0, SEEK_END);
    char rc = minc + rand() % (maxc - minc + 1);
    printf("Random Character : %c \n", rc);
    float minf;
    float maxf;
    printf("Input a Low Float Number \n");
    cin >> minf;
    fseek(stdin, 0, SEEK_END);
    printf("Input a High Float Number \n");
    cin >> maxf;
    fseek(stdin, 0, SEEK_END);
    float fr = ((float) rand() / (float) RAND_MAX);
    fr = minf + fr * (maxf - minf + 1);
    printf("Random Float : %f \n", fr);
    

    return 0;
}
