// Q5: Write a program to check if a number is divisible by 2 or not.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check : ");
    scanf("%d", &num);

    printf("If you got 0 it means number is not divisible by 2. On the othe hand, If you got 1 it means number is divisible by 2\n");
    printf("%d\n", num % 2 == 0);
    return 0;
}

// DONE