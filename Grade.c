#include<stdio.h>

int main() {
    int Marks;

    printf("Enter Your Marks(0-100) : ");
    scanf("%d", &Marks);

    if (Marks >= 0 && Marks <= 30)
    {
        printf("You get grade C in Exam \n");
        printf("Need some Improvement \n");
    }
    else if (Marks > 30 && Marks <= 70)
    {
        printf("You get grade B in Exam  \n");
        printf("Need some Improvement \n");
    }
    else if (Marks > 70 && Marks <= 90)
    {
        printf("You get grade A in Exam  \n");
        printf("Need some Improvement \n");
    }
    else if (Marks > 90 && Marks <= 100)
    {
        printf("You get grade A+ in Exam  \n");
        printf("Need some Improvement \n");
    }
    else
    {
        printf("Worng Marks");
        printf("Try Again \n");
    }
    
    return 0;
}