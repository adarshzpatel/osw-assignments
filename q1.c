#include<stdio.h>

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    // print odd numbers from 1 to n
    int i = 1;
    
    while(i <= n){
    	if(i % 2 != 0){
    		printf("%d ",i);
    	}
        i++;
    }
    
    return 0;
}
