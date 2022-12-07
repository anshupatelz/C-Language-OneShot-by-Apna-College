//Q: d. Make your own pow function.
#include <stdio.h>
int power(int n, int m);

int main(){
    int a, b;
    printf("Enter your base number : ");
    scanf("%d", &a);
    printf("Enter your power number : ");
    scanf("%d", &b);
    printf("Square of your number is : %d",power(a,b));
    return 0;
}

int power(int n, int m){
    if (m == 0){
        return 1;
    }
   int powerNum = power(n, m - 1);
   int fnlResult = n * powerNum;
   return fnlResult;
}

//Done