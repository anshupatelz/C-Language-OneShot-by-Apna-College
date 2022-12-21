// Q18: Keep taking numbers as input from user until user enters a number which is multiple of 7. [03:36:28]

#include <stdio.h>
int main()
{
    int num;
    printf("Enter numbers : ");
    scanf("%d", &num);

    do
    {
        scanf("%d", &num);
    } while (num % 7 != 0);
    printf("Oh NO! You entered multiple of 7");

    return 0;
}

// DONE