#include<stdio.h>

void main(){
    int n,sum;
    printf("Enter number of values to enter n : ");
    scanf("%d", &n);   
    int arr[n];
    // take input 
    for(int i = 0 ; i < n ; i++){
       printf("Enter value at index %d\n",i); 
       scanf("%d", &arr[i]);
       sum += arr[i];
    }
    
    printf("Sum is %d\n",sum);

}