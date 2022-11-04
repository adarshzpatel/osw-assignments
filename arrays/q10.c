#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter the sorted array : ");
    int arr[n+1]; //1 extra to insert new value
    for(int i=0; i<n; i++) {
        scanf("%d",arr+i);
    }
    int num;
    printf("Enter value to be inserted : ");
    scanf("%d",&num);
    int flag = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] > num) {
            for(int j=n-1; j>=i; j--) {
                arr[j+1] = arr[j];
            }
            arr[i] = num;
            flag = 1;
        }
    }
    if(!flag) arr[n] = num;
    printf("New array : ");
    for(int i=0; i<n+1; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}