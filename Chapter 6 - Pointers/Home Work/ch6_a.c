// Q:a. Write a program in C to find the maximum number between two numbers using a pointer.

#include<stdio.h>
int maxNum(int *x, int *y);

int main(){
    int a,b;
    printf("Enter two different number to get maximum number : ");
    scanf("%d\n%d",&a,&b);
    maxNum(&a, &b);
    return 0;
}

int maxNum(int *x, int *y){
    if(*x > *y){
    printf("Your max number is : %d", *x);
    }else{
        printf("Your max number is : %d", *y);
    }
    return 0;
}

//Done
