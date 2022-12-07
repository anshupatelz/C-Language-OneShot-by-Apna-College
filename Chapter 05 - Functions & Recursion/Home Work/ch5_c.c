//Q: c. Write a function to print "Hot" or "Cold" dependingon the temperature user enters.
#include<stdio.h>
void printTem(int tem);

int main(){
    int tem;
    printf("Enter a temerature (in degree celsius) to check, is it Hot or Cold : ");
    scanf("%d", &tem);
    printTem(tem);
    return 0;
}

void printTem(int tem){
    if(tem <= 45){
        printf("Cold");
    }else{
        printf("Hot");
    }
}

//Done