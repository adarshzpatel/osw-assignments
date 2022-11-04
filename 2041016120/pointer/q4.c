#include<stdio.h>

int main(){
  int a,b;
  printf("Enter 2 numbers : ");
  scanf("%d %d", &a, &b);
  int *pA = &a;
  int *pB = &b;
  int *max = *pA > *pB ? pA : pB;
  printf("Max is %d",*max);
}

/*
Enter 2 numbers : 3 7
Max is 7
*/