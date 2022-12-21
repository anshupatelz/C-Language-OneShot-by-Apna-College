// Print the table of a number input by the user. [03:27:02]
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number to get Table of that : ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", num * i);
    }

    return 0;
}

// DONE