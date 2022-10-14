#include<stdio.h>

int main(){
    // fibonacci number upto n terms using for loop
    int a = 0;
    int b = 1;
    int c = 1;
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if(n >= 1) printf("%d ",a);
    if(n >= 2) printf(" %d ",b);
    if(n >= 3) printf(" %d ",c);
    
    for(int i = 4; i <= n; i++){
        a = b;
        b = c;
        c = a + b;
        if(i > 3) printf(" %d ",c);
    }

    return 0;
}