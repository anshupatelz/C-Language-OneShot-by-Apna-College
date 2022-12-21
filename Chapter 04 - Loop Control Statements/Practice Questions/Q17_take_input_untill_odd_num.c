// Q17: Keep taking numbers as input from user until user enters an odd number. [03:32:35]
/*
#include <stdio.h>
int main()
{
    int num;
    printf("Enter even numbers as much as you want : ");
    scanf("%d", &num);

    do
    {
        scanf("%d", &num);
    } while (num % 2 != 0);

    printf("Oh NO! You entered a odd number");

    return 0;
}*/

// DONE

#include <stdio.h>
int main()
{
    int num;
    printf("Enter even numbers as much as you want : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        for (int i = 0; i > 0; i++)
        {
            scanf("%d", &num);
        }
    }
    else
    {
        printf("Oh NO! You entered a odd number");
    }
    return 0;
}

// Pending...