#include <stdio.h>

int main() {

    int Marks;
    printf("Enter your Marks(0-100) : ");
    scanf("%d", &Marks);

    if (Marks >= 0 && Marks <= 30)
    {
        printf("FAIL");
    }
    else if (Marks > 30 && Marks <= 100)
    {
        printf("PASS");
    }
    else
    {
        printf("Not Valid");
    }
    
    return 0;
}