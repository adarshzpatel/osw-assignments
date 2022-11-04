// swap two numbers using pointers
#include<stdio.h>

int main(){
    int a, b, sum;
    int *pA, *pB;
    printf("Enter any two Number: ");
    scanf("%d%d", &a, &b);
    pA = &a;
    pB = &b;
    //swap
    a = *pA + *pB;
    b = *pA - *pB;
    a = *pA - *pB;
    printf("a: %d , b : %d",a,b);
    return 0;
}

/*
Enter any two Number : 4 6
a : 6 , b : 4
*/
