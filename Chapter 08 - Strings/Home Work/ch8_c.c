//Q:C. Write a program to remove blank spaces in a string.
#include<stdio.h>
#include<string.h>
int main(){

    //input
    printf("Enter a sentence to remove blank spaces from it : \n");
    char line[100];
    fgets(line, 100, stdin);

    //logic
    for(int i=0; line[i] != '\0'; i++){
        if (line[i]==' '){
            for( int j = i; line[j] != '\0'; j++){
                line[j]=line[j+1];
            }
        }
    }  

    //output
    puts(line);
    return 0;
}

//Done