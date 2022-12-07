// Write a program to calculate perimeter of rectangle. Take sides, a & b, from the user.
#include<stdio.h>
int main(){
    //input
    int a,b;
    printf("Enter the width of rectangle : ");
    scanf("%d", &a);
    printf("Enter the length of rectangle : ");
    scanf("%d", &b);

    //output
    printf("Perimeter of rectangle is : %d", 2*(a+b));

    return 0;
}

//Done
