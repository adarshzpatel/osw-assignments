#include<stdio.h>


int main(){
    int a = 20;
    int *b = &a;
    printf("Address of a : %p\n", &a);
    printf("Address of b : %p\n", b);
    return 0;
}