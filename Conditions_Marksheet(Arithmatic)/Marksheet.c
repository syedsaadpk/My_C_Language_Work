#include <stdio.h>
int main() {

    int acc;
    printf("Enter Your Accounting Marks: \n");
    scanf("%d", &acc);

    int stats;
    printf("Enter Your Statistics Marks: \n");
    scanf("%d", &stats);

    int econ;
    printf("Enter Your Economics Marks: \n");
    scanf("%d", &econ);

    int itb;
    printf("Enter Your ITB Marks: \n");
    scanf("%d", &itb);

    int isl;
    printf("Enter Your Islamiat Marks: \n");
    scanf("%d", &isl);

    int pst;
    printf("Enter Your PST Marks: \n");
    scanf("%d", &pst);

    int eng;
    printf("Enter Your English Marks: \n");
    scanf("%d", &eng);

    float total_marks = 600.0;

    int obtained_marks = acc+stats+econ+itb+isl+pst+eng;

    float percent = obtained_marks / total_marks * 100;

    printf("Marksheet of B.COM \n");
    printf("Your Marks In Accounting Are: %d \n", acc);
    printf("Your Marks In Statistics Are: %d \n", stats);
    printf("Your Marks In Economics Are: %d \n", econ);
    printf("Your Marks In ITB Are: %d \n", itb);
    printf("Your Marks In Islamiat Are: %d \n", isl);
    printf("Your Marks In PST Are: %d \n", pst);
    printf("Your Marks In English Are: %d \n", eng);
    printf("Your Total Marks Are: %2.f \n", total_marks);
    printf("Your Obtained Marks Are: %d \n", obtained_marks);
    printf("Your Percentage Is: %2.f \n", percent);

    if (percent>=60)
    {
        printf("Congratulations! You Have Obtained First Division \n");
    }

    else if (percent>=50)
    {
        printf("You Have Obtained Second Division \n");
    }
    
    else{
        printf("You Have Passed \n");
    }

}