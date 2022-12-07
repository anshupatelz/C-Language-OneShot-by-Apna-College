//Q. c. Write a program to insert an element at the end of an array.
#include<stdio.h>
int main(){
    int arr[5] = {5,4,3,2};

    printf("Inter a number to insert at the end of your arr : ");
    scanf("%d", &arr[4]);

    printf("Here's your new arr : \n");
    for(int i=0; i<5; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}

