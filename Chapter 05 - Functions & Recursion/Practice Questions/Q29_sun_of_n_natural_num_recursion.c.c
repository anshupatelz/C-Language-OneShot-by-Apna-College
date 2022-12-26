// Q29 (Q30): Sum of first n natural numbers. [04:46:56]

#include <stdio.h>
#include <math.h>
int natNumSum(int n);
int main()
{
    printf("Enter a number to get sum of natural numbers : ");
    int num;
    scanf("%d", &num);
    natNumSum(num);

    return 0;
}
int natNumSum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sum1tN = natNumSum(n - 1);

    int finalSum = sum1tN + n;
    return finalSum;
}

// pending...