#include<stdio.h>

int main() {
    int First_Number,Second_Number,Third_Number;
    float avg;
    printf("Enter Three Numbers :\n");
    scanf("%d %d %d", &First_Number , &Second_Number , &Third_Number);

    avg = (First_Number + Second_Number + Third_Number)/3.0;
    printf("Average of Three Number is : %f", avg);
    return 0;
}