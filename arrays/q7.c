#include<stdio.h>
#include<limits.h>

int main(){
	int arr[10] = {5,2,1,2,4,7,8,9,2,9};
	int max = INT_MIN;
	int min = INT_MAX;

	for(int i = 0 ; i < 10;i++){
		// bubble sort 
		for(int j = 0; i < 10; i++) {
			if(arr[i] > arr[j]){
				int temp = arr[j];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i = 0 ; i < 10;i++){
		if(arr[i] > max) max = arr[i];		
		if(arr[i] < min) min = arr[i];
	}
	
	printf("Max value is : %d \n", max);
	printf("Min value is : %d \n", min);
	
	

	 
}
