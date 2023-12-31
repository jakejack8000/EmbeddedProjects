#include <stdio.h>
#include <stdlib.h>
int factorial(int n){
if(n==1||n==0){return 1;}
return n*factorial(n-1);
}

int main()
{
    int x;
    do{
    printf("Enter a positive Number: ");
    scanf("%d",&x);}
    while(x<0);
    printf("Factorial of %d is %d",x,factorial(x));
    return 0;
}
