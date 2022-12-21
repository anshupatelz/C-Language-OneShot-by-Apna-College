/* Q9: Write a program to check if a student passed or failed.
marks> 30 is PASS | marks <= 30 is FAIL [02:30:03] */

#include <stdio.h>
int main()
{
    // input
    int StuMarks;
    printf("Enter your marks : ");
    scanf("%d", &StuMarks);

    // output
    if (StuMarks > 30)
    {
        printf("Well Done! You PASSED");
    }
    else
    {
        printf("Sorry to say but are FAILED. You need to study hard next time.");
    }
    return 0;
}