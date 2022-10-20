#include<stdio.h>

void sort(int a[],int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
    		if(a[i] < a[j]) {
    		    int temp = a[i];
    		    a[i] = a[j];
    		    a[j] = temp;		
    		}
    	  }
    }
}


void main(){
   	int arr[6] = {1,2,4,1,3,5}; 	
	int count;
   	sort(arr,6);
    // find duplicates
    printf("Unique elements are: \n"); 
 	int total = 0;

 	int i = 0;
 	int j = 1; 
    while(j < 6){
		printf("%d ",arr[i]);
		
	 	while(arr[i] == arr[j]){
	 		j++;
	 	}
	 	
	 	i = j;
		 	
    }
 
    
}
