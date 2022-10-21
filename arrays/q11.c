#include<stdio.h>

int main(){
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	
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
	
	printf("Second largest element is : %d", arr[8]);
}
