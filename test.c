// Q15: Print the Sum of first n Natural Numbers. Also, print them in reverse
#include <stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum is:%d", sum);
    return 0;
}