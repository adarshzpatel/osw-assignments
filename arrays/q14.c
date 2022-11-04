#include<stdio.h>

int main(){
	// write a program to find the sum of array using pointers
	int arr[5] = {1,2,3,4,5};
	int *p = &arr;
	int sum;
	for(int i = 0 ; i < 5;i++){
		sum += *p;
		*p += 1;
	}
	printf("Sum is %d ", sum);
}
