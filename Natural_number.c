#include<stdio.h>

int main() {
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = n; i >= 1; i--)
    {
        sum += i;
        printf("%d\n", i);
    }

    printf("Sum is %d", sum);

    // for (int i = n; i >= 1; i--)
    // {
    //     printf("%d\n", i);
    // }
    
    
    return 0;
}