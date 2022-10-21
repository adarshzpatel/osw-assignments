#include<stdio.h>
#include<limits.h>

int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int odd[10] = {}; int even[10];
	int o;int e; // keeping count of odd and even elements
	
	for(int i = 0;i < 10;i++){
		if(arr[i] % 2 == 0 ){
			even[e++] = arr[i];
		} else {
			odd[o++] = arr[i];
		}
	}
	
	printf("Odd numbers : ");
	for(int i = 0 ; i < o ; i++) {
		printf("%d " , odd[i]); 
	}
	printf("\nEven numbers : ");
	for(int i = 0 ; i < e ; i++) {
		printf("%d " , even[i]); 
	}
	 
}
