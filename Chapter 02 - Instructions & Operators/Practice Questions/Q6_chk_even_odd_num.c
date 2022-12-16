// Q6: Write a program to check even & odd numbers.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check : ");
    scanf("%d", &num);

    printf("If you got 0 it means number is ODD. On the othe hand, If you got 1 it means number EVEN\n");
    printf("%d\n", num % 2 == 0);
    return 0;
}

// DONE