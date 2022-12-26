// Q30 (Q31): Factorial of n. [04:55:58]

#include <stdio.h>
int factorial(int n);
int main()
{
    printf("Enter a number to get factorial of that : ");
    int num;
    scanf("%d", &num);
    factorial(num);

    return 0;
}
int factorial(int n)
{
    int finalSum = 0;
    if (n == 0)
    {
        return;
    }
    finalSum = n + finalSum;
    factorial(n - 1);

    return finalSum;
}

// pending...