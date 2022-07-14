#include <stdio.h>
#include <stdlib.h> // for srand
#include <time.h>   // for time

int main() {

    srand(time(0));     // is line se random number har bar alag aaega

    int random_number = rand();
    printf("Your Random Number Is: %d \n", random_number);

}