#include<stdio.h>

int main(){
    int n;
    printf("Enter number n : ");
    scanf("%d",&n);
    int x = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",x);
            x++;
        } 
    printf("\n");
    }        
}