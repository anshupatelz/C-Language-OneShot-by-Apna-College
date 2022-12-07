//Q:b. Write a function to find square root of a number.
#include<stdio.h>

int sqrRoot(int x);

int main(){
    int N;
    printf("Enter a number to get square root of it : ");
    scanf("%d", &N);
    sqrRoot(N);
}

int sqrRoot(int x){
    for(int i = 0; i < x; i++){
        int y = i*i;
        if(y == x){
            printf("Square root of %d is : %d", x, i);
            break;
        }
    }
}

//Done by my side