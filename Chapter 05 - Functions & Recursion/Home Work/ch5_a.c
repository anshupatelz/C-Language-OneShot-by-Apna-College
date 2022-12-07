//a. Write a function to find sum of digits of a number.
#include<stdio.h>
int sum(int n);

int main(){
    int x;
    printf("Enter a number : ");
    scanf ("%d", &x);
    printf("Sum of digits of your number is : %d", sum(x));
    return 0;
}

//Function logic
int sum(int n){
    if (n >= 1 && n <= 9){
        return n;
    }
    int nn, dgt1, dgt2;
    if (n >= 10 && n <= 99){
        dgt2 = n%10;
        dgt1 = n/10;

        nn = dgt1 + dgt2;
        return nn;
    }

    int nnn, dgt3, rimdr;
    if (n >= 100 && n <= 999){
        dgt3 = n%10;
        rimdr = n/10;
        dgt2 = rimdr%10;
        dgt1 = n/100;

        nnn = dgt1 + dgt2 + dgt3;
        return nnn;
    }

}
//Done