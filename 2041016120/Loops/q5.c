#include<stdio.h>
// Fibonacci upto n times
int main(){
    int n;
    int a =0, b = 1;
    int c = a+b;
    int i = 0;
    
    printf("Enter n: ");
    scanf("%d",&n); 

    if(n >= 1){
        printf("%d, ",a);
    }

    if(n >= 2){
        printf(" %d, ",b);
    }

    if(n >= 3){
        printf(" %d, ",c);
    }


    if(n > 2){
        while(i++ < n-3){
            printf("%d, ",b+c);
            a = b;
            b = c;
            c = a+b;
        }
    }

}