// Q26 (Q29): Use library functions to calculate the square of a number given by user. [04:32:56]

#include <stdio.h>
#include <math.h>

int main()
{
    int num, sqrNum;
    printf("Enter a number to get square of it : ");
    scanf("%d", &num);

    sqrNum = pow(num, 2);

    printf("%d", sqrNum);
    return 0;
}

// DONE