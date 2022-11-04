#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char str[50];
	int i = 0;
	printf("Enter string with spaces : \n");
	fgets(str,sizeof str,stdin);
	
	while(str[i] != '\n'){
		if(str[i] == ' ') printf("\n");
		else putchar(str[i]);
		i++;
	}
	printf("\n");
	return 0;
}

