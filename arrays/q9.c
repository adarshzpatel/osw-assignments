#include<stdio.h>
#include<limits.h>

int main(){
	int arr[10] = {5,2,1,2,4,7,8,9,2,9};


	for(int i = 0 ; i < 10;i++){
		// bubble sort 
		for(int j = 0; j < 10; j++) {
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("Array in ascending order is : " );
	for(int i = 0 ; i < 10 ; i++) {
		printf("%d " , arr[i]); 
	}
	 
}
