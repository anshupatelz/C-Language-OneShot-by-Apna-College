// Q33 (Q34): Write a function to print N terms of the Fibonacci sequence. [05:11:45]
#include <stdio.h>
int nTermsFibonacci(int n);
int main()
{
    printf("Enter a number to get N terms of the fibonacci sequence : ");
    int number;
    scanf("%d", &number);

    if (number <= 0)
    {
        return printf("Invalid number for fibonacci sequence\n");
    }
    else
    {
        printf("%dth terms of the fibonacci sequence is : %d", number, nTermsFibonacci(number));
    }
    return 0;
}
int nTermsFibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else if (n > 2)
    {
        int nf1 = 0, nf2 = 1;
        int nFabonacci;
        for (int i = 3; i <= n; i++)
        {
            nFabonacci = nf1 + nf2;
            nf1 = nf2;
            nf2 = nFabonacci;
        }
        return nFabonacci;
    }
}

// Done