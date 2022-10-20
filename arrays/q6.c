#include<stdio.h>

void main(){
	int size = 5;
	int a[5] = {10,6,5,4,1};    
	int b[5] = {9,8,3,2,1};
	int c[10] = {};
	
	
	// merge
	int i = 0; // pointer for array a 
	int j = 0; // pointer for array b
	int k = 0;

	while(i < 5 && j < 5){
		if(a[i] > b[j]){
			c[k] = a[i];
			i++;
		} else {
			c[k] = b[j];
			j++;
		}
		k++;
	}
	
	while(i < 5){
		c[k] = a[i];
		i++;
		k++;
	}
	
	while(j < 5){
		c[k] = b[j];
		j++;k++;
	}
	
	
	for(i = 0;i < 10;i++){
	printf("%d ",c[i]);
	
	}
}
