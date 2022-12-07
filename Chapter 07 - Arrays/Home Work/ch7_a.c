//Q: A. In an array of numbers, find how many times does a number 'x' occurs.

#include<stdio.h>
int main (){
    //input
    int arr [15] = {1,2,3,4,5,3,2,4,2,5,6,8,9,4,3};
    
    int x;
    printf("Enter a number witch you wanna look at for : ");
    scanf("%d", &x);

    //logic
    int count = 0;
    for (int i = 0; i <= 15; i++){
        if (x == arr[i]){
            count++;
        }
    }

    //output
    printf("Your number '%d' found %d times in array", x, count);

    return 0;
}

//Done