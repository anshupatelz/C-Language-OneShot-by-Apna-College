//Q: B. Replace the data in file of Q(a) with the number of vowels in the string.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("file_ch10_a.txt", "r");

    int count = 0;
    char ch;
    while (ch != EOF) {
        ch = fgetc(fptr);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' 
            || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            count++;
        } 
    }
    fclose(fptr);

    fptr = fopen("file_ch10_b.txt", "w");
        fprintf(fptr, "%d\n", count);
    fclose(fptr);
    return 0;
}

//Done