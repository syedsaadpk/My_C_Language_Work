#include <stdio.h>
int main() {

    int salary[5] = {100,200,300,400,500};  // []is ke andr array ki quantity he {}or is men array
    //index          0   1   2   3   4

    printf("Salary Of 0 Index Is: %d \n", salary[0]);
    printf("Salary Of 1 Index Is: %d \n", salary[1]);
    printf("Salary Of 2 Index Is: %d \n", salary[2]);
    printf("Salary Of 3 Index Is: %d \n", salary[3]);
    printf("Salary Of 4 Index Is: %d \n", salary[4]);

    printf("Salary Of 5 Index Is: %d", salary[5]); // 5 number ka index nhn he lekin C 5 number index ki value apne pas se le aaya


}