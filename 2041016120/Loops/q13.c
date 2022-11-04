#include<stdio.h>

int main(){
    // what is a perfect number | sum of divisors = number 
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int sumOfDiviors = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if(n%i == 0) sumOfDiviors+= i;
    }
    if(sumOfDiviors == n) printf("%d is a perfect number",n);
    else printf("%d is not a perfect number",n);
}