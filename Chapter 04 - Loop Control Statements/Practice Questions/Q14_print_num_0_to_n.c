// Q14: Print the number from 0 to N, if n is giver by user. [03:10:54]
#include <stdio.h>
int main()
{
    // input
    int num = 0;
    int targetNum;
    printf("Enter a number : ");
    scanf("%d", &targetNum);

    // output
    while (num <= targetNum)
    {
        printf("%d\n", num);
        num++;
    }
    return 0;
}

// Done