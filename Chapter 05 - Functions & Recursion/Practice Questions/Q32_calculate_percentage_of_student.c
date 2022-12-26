// Q32 (Q33): Write a function to calculate Percentage of a student from Marks in Science, Math & Sanskrit. [05:08:45]
#include <stdio.h>
float calPercentage(int sub1, int sub2, int sub3);

int main()
{
    int marksSci;
    printf("Enter your marks of Science : ");
    scanf("%d", &marksSci);

    int marksMath;
    printf("Enter your marks of Math : ");
    scanf("%d", &marksMath);

    int marksSans;
    printf("Enter your marks of Sanskrit : ");
    scanf("%d", &marksSans);

    printf("Percentage : %.2f", calPercentage(marksSci, marksMath, marksSans));

    return 0;
}

float calPercentage(int sub1, int sub2, int sub3)
{
    return (sub1 + sub2 + sub3) / 3;
}

// Done