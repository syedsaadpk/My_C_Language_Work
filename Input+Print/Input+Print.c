#include <stdio.h>
int main() {
    char name[30];
    printf("What is your name: ");
    scanf("%s", &name);

    int age;
    printf("What is your age: ");
    scanf("%d", &age);
    
    float height;
     printf("What is your height: ");
    scanf("%f", &height);

    printf("Your Name Is %s \n", name);
    printf("Your Age Is %d \n", age);
    printf("Your Heigth Is %.2f \n", height); //.2 se point ke bad 2 digits aaenge

}