#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(1){
    printf("Insert number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    int newArr[n+1];
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Entered Array: \r\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int insertedNumber;
    int insertLocation;
    printf("Enter the element to be inserted: ");
    scanf("%d",&insertedNumber);
    printf("Enter the insert location to be inserted: ");
    scanf("%d",&insertLocation);
    insertLocation--;
    for(int i=0;i<insertLocation+1;i++){
        newArr[i]=arr[i];
    }
    newArr[insertLocation]=insertedNumber;
    for(int i=insertLocation+1;i<n+1;i++){
        newArr[i]=arr[i-1];
    }
    printf("New array:\r\n");
    for(int i=0;i<n+1;i++){
        printf("%d ",newArr[i]);
    }
    printf("\n");
    }
    return 0;
}
