#include<stdio.h>

int main(){

	int m1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int m2[3][3] = {{7,5,3},{2,6,1},{6,1,6}};
		
	for(int i = 0; i < 3;i++){
		for(int j = 0 ; j < 3; j++){
			printf("%3d ",m1[i][j] + m2[i][j]);
		}
		printf("\n");
	}
	
	
}
