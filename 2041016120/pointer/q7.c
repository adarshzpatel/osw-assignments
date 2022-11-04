#include<stdio.h>

int main(){
  char ch = 65;
  char *p = &ch;

  for(int i = 0; i < 26;i++){
    printf("%c", *p);
    *p += 1;
  }
}
/*
ABCDEFGHIJKLMNOPQRSTUVWXYZ
*/