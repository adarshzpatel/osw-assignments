#include<stdio.h>

int findMax(int a, int b){
  return a > b ? a : b;
}

int main(){
  int a,b;
  printf("Enter 2 numbers : ");
  scanf("%d %d", &a, &b);
  int *pA = &a;
  int *pB = &b;
  int (*max_val) (int,int) = findMax;
  printf("Max is %d",(*max_val)(*pA,*pB));
}

/*
Enter 2 numbers : 3 7
Max is 7
*/