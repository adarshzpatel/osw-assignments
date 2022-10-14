#include<stdio.h>

int main(){
    int n,i = 0;
    int baby = 0,school = 0,adult = 0;
    while(i < 15){
        printf("Enter n : ");
        scanf("%d",&n);
        printf("\n");
        if(n >= 0 && n <=5){
            baby = baby + n;
        } else if(n >= 5 && n <= 17){
            school = school + n;
        } else{
            adult = adult + n;
        }
        i++;
    }
    printf("\nBaby : %d\nSchool : %d\nAdult :%d",baby,school,adult);


}