#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c;
	printf("Enter a letter : \n");
	scanf("%c",&c);
	if(islower(c)){
        printf("Letter is lowercase");
    } else {
        printf("Letter is not lowercase");
    }
	return 0;
}
