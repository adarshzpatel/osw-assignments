#include<stdio.h>

int main(){
    int sum=0,n;

    for(int i = 0; i < 10; i++){
        printf("Enter n(%d): ",i); 
        scanf("%d",&n);
        if(n <0) continue;
        sum += n;
    
    }   

    printf("Sum is %d\n",sum);
}