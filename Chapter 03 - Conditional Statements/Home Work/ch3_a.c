/* Write a program to check if a given number is Armstrong number or not.
(Search what is Armstrong number)
*/

#include<stdio.h>
int main(){
    //input
    int num, originalNum, fristNum, fristResult, remainder, secondNum, secondResult, thirdNum, thirdResult, finalResult;
    printf("Enter a 3 Digit number to check, it's an Armstrong number or not : ");
    scanf("%d", &num);

    
    //logic for 1st Number
    num = originalNum;
    fristNum = originalNum % 10;
    fristResult = fristNum * fristNum * fristNum;

    //logic for 2nd Number
    remainder = originalNum / 10;
    secondNum = remainder % 10;
    secondResult = fristResult + secondNum * secondNum * secondNum;

    //logic for 3rd Number
    thirdNum = remainder / 10;
    thirdResult = secondResult + thirdNum * thirdNum * thirdNum;
    finalResult = thirdResult;
    
    
    //output
    if (finalResult == num)
    {
        printf("This is a Armstrong Number");
    }else {
        printf("This is not a Armstrong Number");
    }
    
    return 0;
}

//Pending...