// Q20: Print all the odd numbers from 5 to 50. [03:40:36]
#include <stdio.h>
int main()
{
    int num;
    printf("Odd umbers from 5 to 50 : ");

    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 == 0)
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

// Done