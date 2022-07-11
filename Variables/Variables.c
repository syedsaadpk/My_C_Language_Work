#include <stdio.h>
int main() {
    int age = 20;
    printf("Your Age is %d \n", age);     // %d for integer value

    char name[20] = "Syed Saad Ahmed"; // [20] is ka matlab ye he k square bracket men jo value he utne hi alphabet ham de sakte hen char men
    printf("Your Name is %s \n", name);         // %s for string or alphabetical value

    char name1 = 'S'; // Is case men sirf single alphabet de saktey hen char men
    printf("Your Single Alphabet Name is %c \n", name1);  // %c for single alphabet in char
    
    float height = 55.5;
    printf("Your Height is %f", height);   // %f for float value
    
}