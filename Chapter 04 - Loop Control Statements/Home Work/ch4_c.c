//Q3: Write a program to print prime numbers in a range.

#include<stdio.h>
int main (){
    int n1, n2, prime_num;

    //input
    printf("Enter the first number of your range : ");
    scanf("%d", &n1);

    printf("Enter the last number of your range : ");
    scanf("%d", &n2);

    //logic
    for(int i = n1; i <= n2; i++){
        prime_num = 0;
        
        for(int j = 1; j <= i; j++){

            if(i %j == 0){
                prime_num++;
            }
        }

        //output
        if(prime_num == 2){
            printf("%d \n", i);
        }
        
    }
    return 0;
}

//Done