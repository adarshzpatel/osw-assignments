#include<stdio.h>

int main(){
	char str[50];
	fgets(str,sizeof str,stdin);
	int i = 0 ;
	while(str[i] != '\n'){
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') putchar(str[i]);
		i++;  
	}
}
