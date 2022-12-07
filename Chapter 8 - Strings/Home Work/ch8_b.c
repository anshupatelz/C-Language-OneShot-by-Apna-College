//Q:B. Write a program to print the highest frequency character in a string.
#include<stdio.h>
#include<string.h>
int main(){
    char line[100];
    fgets(line, 100, stdin);
    //puts(line);

    int freCount = 0;
    for(int i = 0; i<100; i++){
        if(line[i]==line[i-1]){
            freCount++;
        }
    }

    printf("%d", freCount);
    return 0;
}

//Pending...