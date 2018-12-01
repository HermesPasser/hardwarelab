 /*
	Guess the number
	works with C99
 */
 
 // visual studio stuff
//#include "stdafx.h"

#define bool int
#define true 1
#define false 0

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main_old(int argc, char *argv[]) {
    srand((int)time(NULL)); 
    int guess = 0, tryCount = 0, num = rand() % 10;
	bool fstTime = true;
    
    do {
        if(tryCount == 5) {
            puts("You're rechead the limit of tries, the random number will be regenerated!\n");
            num = rand() % 10;
            tryCount = 0;
        } 
        
entrynumber:
        puts("Guess a number: ");

		if (!fstTime) // i can just check if the buffer is empty
			fflush(stdin);

		if (scanf(" %d", &guess) != 1) {
			puts("Inválid character!");
			fstTime = false;
			goto entrynumber;
		}

        if (guess != num) {
            puts("You idiot! Try again");
            tryCount++; 
        }
                                
    } while (guess != num);
    
    puts("You're smarter than i tought, huh.");
    system("PAUSE");
       
	return 0;
}
