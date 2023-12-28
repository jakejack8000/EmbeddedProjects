#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstMatrix[2][2];
    int secondMatrix[2][2];
    int sumMatrix[2][2];

    printf("Enter elements of first Matrix: \n");
    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
                printf("Element a%d%d: ",i,j);
                scanf("%d",&firstMatrix[i][j]);
                printf("\n");
        }
    }
    printf("Enter elements of second Matrix: \n");
    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
                printf("Element b%d%d: ",i,j);
                scanf("%d",&secondMatrix[i][j]);
                printf("\n");
        }
    }
    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
                sumMatrix[i][j] = firstMatrix[i][j]+secondMatrix[i][j];
        }
    }
    printf("Sum of Matrix\r\n");
    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
                printf("%d\t",sumMatrix[i][j]);
        }
        printf("\r\n");
    }
    return 0;
}
