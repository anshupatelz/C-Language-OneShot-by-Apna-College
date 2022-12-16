/*Q3: Solve it, int a = 1.999999; | a ki value kya hogi 1 or 2?
hints: int a = (int) 1.999999;
*/
#include <stdio.h>
int main()
{
    int a = 1.999999;
    printf("Value of a = %d\n", a);

    int b = (float)1.999999;
    printf("Value of b = %d\n", b);
    return 0;
}

// DONE