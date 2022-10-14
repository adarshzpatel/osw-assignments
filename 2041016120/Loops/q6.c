#include<stdio.h>

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    // Check for armstrong mumber
    int sum=0;
    int copy = n;
    while(n > 0){
        sum += (n%10)*(n%10)*(n%10);
        n = n/10;
    }
    if(sum == copy){
        printf("Armstrong number");
    } else{
        printf("Not Armstrong number");
    }
}