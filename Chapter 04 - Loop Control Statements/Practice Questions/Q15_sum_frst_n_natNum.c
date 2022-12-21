// Q15: Print the Sum of first n Natural Numbers. Also, print them in reverse [03:18:09]
#include <stdio.h>
int main()
{
    int lastN, sumOfN;
    sumOfN = 0;

    // Taking input
    printf("Enter the last Number (N) : ");
    scanf("%d", &lastN);

    // Printing the Sum of N Numbers
    int i = 0;
    while (i <= lastN)
    {
        sumOfN = sumOfN + i;
        i++;
    }
    printf("\nSum of %d Numbers is %d\n", lastN, sumOfN);

    // Printing All Number in Reverse
    printf("\nYour Numbers are: \n");
    for (int i = lastN; i > 0; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}

// Done