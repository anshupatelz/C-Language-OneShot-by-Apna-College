//Q: Write a program to check if the given number is anatural number. (Natural numbers start from 1)

#include<stdio.h>
int main(){
    //input
    int NN;
    printf("Enter a number : ");
    scanf("%d", &NN);

    //output
    if (NN > 0){
        printf("Entered number is a Natural Number");
    } else{
        
        printf("Entered number is not a Natural Number");
    }
    return 0;
}

//Done