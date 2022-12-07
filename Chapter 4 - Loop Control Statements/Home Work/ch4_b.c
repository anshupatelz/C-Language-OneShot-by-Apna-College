//Q: Write a program to check if a number is prime or not.

//My frist solution of this Question, Something look like this. LOL
/*
#include<stdio.h>
int main(){

    //input
    int a,b;
    printf("Enter a number to check it's a Prime or Not : ");
    scanf("%d", &a);

    //logic
    for(int i = 2; i < a; i++){
        b=(a%i);
    }

    //output
    if(b != 0){
            printf("Your number is a Prime Number");
        }else{
            printf("Your number is not a Prime Number");
        }
     return 0;
}
*/

#include<stdio.h>
int main(){
    int Num, test;

    //input
    printf("Enter a number to check it's a Prime or Not : \n");
    scanf("%d", &Num);

    //logic
    for(int i = 2; i < Num; i++){
        test=(Num%i);
        if(test == 0){
            break;
        }else {
            test=(Num%i);
        }
    }
    
    //output
    if(test == 0){
            printf("%d Your number is not a Prime Number \n", Num);
    }else{
        printf("%d Your number is a Prime Number \n", Num);
    }
    return 0;
}

//Done