// Q28 (Q32): Print "Hello World" 5 times. [04:39:35]

#include <stdio.h>
int areaSqr(int n);
float areaCrcl(float n);
int areaRctgl(int l, int b);

int main()
{
    int sqrSide;
    printf("Enter a side of Square to get area : ");
    scanf("%d", &sqrSide);
    printf("Area of square is : %d\n", areaSqr(sqrSide));

    float crclRedius;
    printf("Enter a redius of circle to get area : ");
    scanf("%f", &crclRedius);
    printf("Area of circle is : %f\n", areaCrcl(crclRedius));

    int rctglLength, rctglBreadth;
    printf("Enter a Length and Breadth of Rectangle to get area : ");
    scanf("%d %d", &rctglLength, &rctglBreadth);
    printf("Area of rectangle is : %d\n", areaRctgl(rctglLength, rctglBreadth));

    return 0;
}

int areaSqr(int n)
{
    return n * n;
}
float areaCrcl(float n)
{
    return 2 * 3.14 * n * n;
}
int areaRctgl(int l, int b)
{
    return 2 * (l + b);
}

// DONE