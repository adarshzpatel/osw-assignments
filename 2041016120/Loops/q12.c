#include <stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    // Check for armstrong mumber using for loop
    for (int i = 0; i < n; i++)
    {

        int sum = 0;
        int copy = i;
        while (copy > 0)
        {
            sum += (copy % 10) * (copy % 10) * (copy % 10);
            copy = copy / 10;
        }
        if (sum == i)
        {
            printf(" %d is Armstrong number \n",i);
        }
    }
}