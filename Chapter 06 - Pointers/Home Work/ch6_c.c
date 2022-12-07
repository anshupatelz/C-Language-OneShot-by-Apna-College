//Q: c. Write a program in C to print all the letters in english alphabet using a pointer.

/*
//1st way
#include<stdio.h>
void printLtr();

int main(){
    printLtr();
}

void printLtr(){
    for (char i = 'A'; i < 'Z'; i++){
        char *j = &i;
        printf ("%c\n", *j);
    }
}
*/

//2nd way
#include<stdio.h>
void printLtr(char *A);

int main (){
    char A;
    printf("All the Letter of English Alphabet\n");
    printLtr(&A);
    return 0;

}

void printLtr(char *A){
    for (char i = 'A'; i < 'Z'; i++){
        printf("%c\n", i);
    }
}