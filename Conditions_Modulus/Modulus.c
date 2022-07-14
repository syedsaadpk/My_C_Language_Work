#include <stdio.h>
int main() {

    int num1 = 33;
    int num2 = 4;
    int div = num1/num2;
    int remainder = num1%num2;

    printf("%d Divided By %d Is %d \n", num1,num2,div);
    printf("%d Divided By %d Reminder Is %d \n", num1,num2,remainder);

    printf("Value Of Num1 Before %d \n", num1);
    int num3 = num1 +1;
    printf("Value Of Num1 After (num3 = num1 +1) %d \n", num3);

    printf("Value Of Num1 Before %d \n", num1);
    int num5 = ++num1;
    printf("Value Of Num1 After (num5 = +num1) %d \n", num5);

    printf("Value Of Num1 Before %d \n", num1);
    int num4 = num1++;
    printf("Value Of Num1 After (num4 = num1++) %d \n", num4);

}