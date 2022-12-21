// Q21: Print the factorial of a number n. [03:42:48]
#include <stdio.h>
int main()
{
    int num;
    // intput
    printf("Enter a number to get factorial of it : ");
    scanf("%d", &num);

    // Output
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    printf("\nThe factorial of %d is : %d", num, factorial);
    return 0;
}

// Done