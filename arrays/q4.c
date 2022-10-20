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
   	int arr[6] = {1,3,4,1,3,3}; 	
	int count;
   	sort(arr,6);
    // find duplicates
    printf("Number of duplicates: \n"); 
 	int total = 0;

 	int i = 0;
 	int j = 1; 
    while(j < 6){
		
	 	while(arr[i] == arr[j]){
	 		j++;
	 	}
	 	
	 	if(j-i > 1){
	 		printf("%d has %d duplicates \n",arr[i] , j-i-1); 		
	 		total += j-i-1;
	 		i = j;
	 	}
		 	
    }
    
    printf("Total number of duplicates is %d", total);
    
}
