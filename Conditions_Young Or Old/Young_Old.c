#include <stdio.h>
int main() {

    printf("Young Or Old \n");
    
    int age;
    printf("Enter Your Age: \n");
    scanf("%d", &age);

    if (age>40)
    {
        printf("You Are Old \n");
    }

    else if (age>19)
    {
        printf("You Are Yong \n");
    }
    
    else if (age>12)
    {
        printf("You Are Teenager \n");
    }
    
    else if(age>0)
    {
        printf("You Are A Children \n");
    }
    
    else{
        printf("Enter Correct Age \n");
    }

}