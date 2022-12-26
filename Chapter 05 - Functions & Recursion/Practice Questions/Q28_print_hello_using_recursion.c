// Q28 (Q32): Print "Hello World" 5 times. [04:39:35]

#include <stdio.h>
void printHello(int count);
int main()
{
    printf("Enter a number to get Hello World : ");
    int num;
    scanf("%d", &num);
    printHello(num);

    return 0;
}
void printHello(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World\n");
    printHello(count - 1);
}

// Done