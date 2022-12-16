/* Q7: Are the following valid or not?
A. int a = 8^8 | B. int x; int y = x; | C. int x,y = x; | D. char stars = '**';
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check : ");
    scanf("%d", &num);

    printf("If you got 0 it means number is ODD. On the othe hand, If you got 1 it means number EVEN\n");
    printf("%d\n", num % 2 == 0);
    return 0;
}