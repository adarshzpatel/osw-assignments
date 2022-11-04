#include<stdio.h>

int main(){
    int n,i = 0;
    int baby = 0,school = 0,adult = 0;
    while(i < 15){
        printf("Enter n : ");
        scanf("%d",&n);
        if(n >= 0 && n <=5){
            baby++;
        } else if(n >= 5 && n <= 17){
            school++;
        } else{
            adult++;
        }
        i++;
    }
    printf("\nBaby : %d\nSchool : %d\nAdult :%d",baby,school,adult);


}