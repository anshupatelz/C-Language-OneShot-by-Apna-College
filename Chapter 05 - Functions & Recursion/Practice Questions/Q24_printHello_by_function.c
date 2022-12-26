// Q24 (Q27): Write 2 functions - one to print "Hello" & second to print "Goodbye". [04:03:54]

#include <stdio.h>

// function prototype
void printHello();
void printGoodbye();

int main()
{
    // function call
    printHello();
    printGoodbye();
    return 0;
}

// function definition
void printHello()
{
    printf("Hello\n");
}

void printGoodbye()
{
    printf("Goodbye\n");
}

// Done