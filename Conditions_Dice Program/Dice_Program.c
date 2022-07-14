#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));
    
    int random_number = rand();
    int remainder = random_number%6; // % se remainder nikalta he
    remainder = remainder+1;

    printf("'DICE PROGRAM' \n");


    printf("Rolling The Dice............... \n");
    printf("Your Dice Number Is: %d \n", remainder);
    
}