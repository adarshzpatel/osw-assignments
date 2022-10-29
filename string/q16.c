#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char str[50];
	int a , b, i;
	printf("Enter string : \n");
	fgets(str,sizeof str,stdin);
	a = strlen(str);
	for(i=0;i<a;i++){
		b = tolower(str[i]);
		putchar(b);
	}	
	return 0;
}
