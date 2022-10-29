#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c;
	char str[50];
	int i = 0;
	printf("Enter string with spaces : \n");
	fgets(str,sizeof str,stdin);
	printf("Enter a character to replace spaces ");
	scanf("%c",&c);
	
	while(str[i] != '\n'){
		if(str[i] == ' ') str[i] = c;
		putchar(str[i]);
		i++;
	}
	
	return 0;
}

