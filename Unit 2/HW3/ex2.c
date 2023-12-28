#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of data: ");
    scanf("%d",&n);
    printf("\n");
    float array[n];
    for(int i=0;i<n;i++){
        printf("Enter element number %d: ",i+1);
        scanf("%f",&array[i]);
    }
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    printf("Average is %.1f",sum/n);
    return 0;
}
