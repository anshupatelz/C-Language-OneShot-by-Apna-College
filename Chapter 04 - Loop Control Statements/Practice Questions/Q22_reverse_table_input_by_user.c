// Q22: Print reverse of the table for a number n. [03:47:52]

#include <stdio.h>
int main()
{
    // Input
    int num;
    printf("Enter a number to get reverse table of it : ");
    scanf("%d", &num);

    // Output reverse table
    printf("Here's reverse of the table for number %d : ", num);
    for (int i = 10; i >= 1; i--)
    {
        printf("\n%d", num * i);
    }
    return 0;
}

// DONE