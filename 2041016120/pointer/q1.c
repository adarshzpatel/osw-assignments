#include<stdio.h>

int main()
{
    int a, b, sum;
    int *pA, *pB;
    printf("Enter any two Number: ");
    scanf("%d%d", &a, &b);
    pA = &a;
    pB = &b;
    sum = *pA + *pB;
    printf("\nSum of %d and %d is %d", *pA, *pB, sum);
    return 0;
}

/*

Enter any two Number: 4 5

Sum of 4 and 5 is 9

*/