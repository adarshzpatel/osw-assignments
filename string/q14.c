#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char str[50];
	int freq[256] = {0};	
	fgets(str,sizeof str,stdin);
	int c;
	int i = 0 ;
	while(str[i] != '\n'){
		freq[str[i]]++;		
		i++;  
	}
	
	for(i =0; i < 256;i++){
		if(freq[i] > 0) printf("%c occurs %d times \n",i,freq[i]);
	}
}
