/* Q8: Print 1(true) or 0(false) for following statements:
A. if it's Sunday & it's snowing -> true |
B. if it's Monday or it's raining -> true |
c. if a number is greater than 9 & less than 100 -> true
[01:56:25] */

#include <stdio.h>
int main()
{
    // A.
    int isSunday = 1;
    int itSnowing = 1;
    printf("\n%d", isSunday && itSnowing);

    // B.
    int num = 11;
    printf("\n%d", 9 < num && num < 100);

    return 0;
}

// Done