#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
    int r,c;
    printf("Enter rows and columns of matrix: ");
    scanf("%d",&r);
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered matrix:\r\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\r\n");
    }
    printf("Transpose of matrix:\r\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\r\n");
    }
    }
    return 0;
}
