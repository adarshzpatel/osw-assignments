#include<stdio.h>
// check palindrome
int main(){
    int n,rev = 0;
    printf("Enter n : ");
    scanf("%d",&n);
    int copy = n;
    while(n > 0){
        rev += (n%10);
        rev *= 10;
        n = n/10;
    }
    rev = rev/10;
     if(copy == rev){
        printf("Palindrome");
    } else{
        printf("not Palindrome");
    }

}