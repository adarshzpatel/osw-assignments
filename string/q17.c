#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c;
	printf("Enter a letter : \n");
	scanf("%c",&c);
	if(isupper(c)){
        printf("Letter is uppercase");
    } else {
        printf("Letter is not uppercase");
    }
	return 0;
}
