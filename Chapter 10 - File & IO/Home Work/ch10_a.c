//Q: A. Write a program to read a string from a file & output to the user.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("file_ch10_a.txt", "r");

    char ch;
    //fscanf(fptr, "%c", &a);
    ch = fgetc(fptr);

    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    printf("\n");
    fclose(fptr);
    return 0;
}

//Done