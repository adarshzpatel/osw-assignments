#include<stdio.h>

void main(){
    int n;
    printf("Enter number of values to enter n : ");
    scanf("%d", &n);   
    int arr[n];

    // take input 
    for(int i = 0 ; i < n ; i++){
       printf("Enter value at index %d\n",i); 
       scanf("%d", &arr[i]);
    }
    
    // print in reverse 
      printf("Array in reverse :"); 
    for(int i = n-1; i >= 0; i--){
       printf("%d " , arr[i]);
    }
}
