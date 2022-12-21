// Q19: Print all numbers from 1 to 10 except for 6. [03:40:00]

#include <stdio.h>
int main()
{
    int num;
    printf("Numbers from 1 to 10 except for 6: ");

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        else
        {
            printf("\n%d", i);
        }
    }

    return 0;
}

// DONE