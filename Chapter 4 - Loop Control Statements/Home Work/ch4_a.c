/* 
    Q: Search on what a "nested loop" is & print this pattern using it.
        *****
        *****
        *****
        *****
*/

#include<stdio.h>
int main(){
    
//output
    for (int i = 1; i <= 4; i++){
        for (int i = 1; i <= 5; i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
//Done