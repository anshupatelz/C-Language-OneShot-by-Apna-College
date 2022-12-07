//Q:D. Write a program to replace lowercase letters with uppercase & vice versa in a string.
#include<stdio.h>
#include<string.h>
void ltrConvrt(char arr[]);

int main(){
    printf("Enter a line to replace lowercase letters with uppercase & vice versa : \n");

    //input
    char line[100];
    fgets(line, 100, stdin);
    
    //output
    ltrConvrt(line);
    return 0;
}

//function logic
void ltrConvrt(char arr[]){
    for (int i=0; arr[i] != '\0'; i++){
    if (arr[i]>='a' && arr[i]<='z'){
        arr[i]=arr[i]-32;
    } else if (arr[i]>='A' && arr[i] <= 'Z'){
        arr[i]=arr[i]+32;
    }
}
puts(arr);
}

//Done