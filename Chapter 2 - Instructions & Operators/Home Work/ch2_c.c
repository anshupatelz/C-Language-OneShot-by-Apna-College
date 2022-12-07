//Q: Write a program to print the smallest number of two.

#include<stdio.h>
int main(){
    //intput
    int a,b,c,d;
    printf("Enter two differant numbers : ");
    scanf("%d%d", &a, &b);

    //logic
    c=(a<b);
    d=(a>b);

    //output
    printf("Note: Smaller number will have 1 & Greater number will have 0 \n");
    printf("%d=> %d \n", a,c);
    printf("%d=> %d \n", b,d);

    return 0;
}

//Done