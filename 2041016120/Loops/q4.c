#include<stdio.h>

void check(int x){
    if(x > 0) printf("POSITIVE\n");
    else if(x < 0) printf("NEGATIVE\n");
    else printf("ZERO\n");
}


int main(){
    int n;
    char choice;
    do{
        printf("Enter a number: \n");
        scanf("%d", &n);
        check(n);
        printf("Check again ? (Y/y) \n");
        scanf(" %s", &choice);    
    } while(choice == 'y' || choice == 'Y');
    
    printf("OK");
    return 0;
}
