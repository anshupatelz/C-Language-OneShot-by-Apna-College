//Q: b. Write a program to print the largest number in an array.

#include<stdio.h>
int main (){
    //intput
    int arr [15] = {1,2,3,4,5,3,2,4,2,5,6,8,9,4,3};
    
    //logic
    int x;
    for(int i=1; i<15; i++){
        if(arr[i]>arr[i-1]){
            x = arr[i];
        }
    }

    //output
    printf("Largest Number in your array is : %d", x);
    return 0;
}

//Done