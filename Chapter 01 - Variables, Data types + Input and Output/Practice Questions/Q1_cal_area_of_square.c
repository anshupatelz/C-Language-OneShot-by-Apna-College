// Q1: Write a program to calculate area of a square. (Side is given)

#include <stdio.h>
int main()
{
    int squareSide;
    printf("Enter the a side of your square : ");
    scanf("%d", &squareSide);

    printf("The area of Square is : %d", squareSide * squareSide);

    return 0;
}

// DONE