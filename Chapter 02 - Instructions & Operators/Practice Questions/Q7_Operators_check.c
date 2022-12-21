/* Q7: Are the following valid or not?
A. int a = 8^8 | B. int x; int y = x; | C. int x,y = x; | D. char stars = '**';
*/
#include <stdio.h>
int main()
{
    // A.
    int a = 8 ^ 8; // Valid (bitwise XOR (exclusive OR))
    printf("%d", a);

    // B.
    int x = 10;
    int y = x; // valid
    printf("%d", y);

    // C.
    int x, y = x; // Invalid

    // D.
    char start = '**'; // Invalid
    printf("%d", start);

    return 0;
}

// Done