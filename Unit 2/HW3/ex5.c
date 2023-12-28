#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
    int n;
    int searchedNumber;
    printf("Insert number of elements in array: ");
    scanf("%d",&n);
    if(n<1){printf("number can't be smaller than 1");continue;}
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
    printf("Enter number to be searched: ");
    scanf("%d",&searchedNumber);
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==searchedNumber){
            index=i+1;
        }
    }
    if(index!=-1){
        printf("%d found at index %d\r\n",searchedNumber,index);
    }
    else{
        printf("Number not found\r\n");
    }
    }
    return 0;
}
