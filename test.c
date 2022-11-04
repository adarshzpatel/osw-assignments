#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Input array : ");
  
    for(int i = 0; i < n; i++){
        scanf("%d",arr[i]);   
    }

    int count = 0; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i!=j && arr[i] == arr[j]){
                if(j < i) break;   
                else {
                    count++;
                }
            }
        }
    }

}