#include<stdio.h>

int sum(int a, int b) {
    return a+b;
}

int main() {
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);
    int (*p) (int,int) = sum;
    printf("%d",p(a,b));
    return 0;
}

/*
Enter 2 numbers : 5 6 
11 
*/