/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    // srand(0);
    int min=1;
    int max=6;
    int rn;
    float rf; 
    rn = min + rand() % (max - min + 1);
    rf = (float) rand() / (float) RAND_MAX; 

    printf("%d \n", rn);
    printf("%f \n", rf);
    
    
    min=1;
    max=12;
    rn = min + rand() % (max - min + 1);
    
    printf("%d \n", rn);
    
    
    //srand(0);
    srand((unsigned)time(NULL));
    min = 'c';
    max = 'q';
    char rc; 
    rc = min + rand() % (max - min + 1); 
    printf("%c \n", rc);
    //printf("%d \n", rc);
    
    
    printf("Hello World");

    
    
    
    

    return 0;
}
