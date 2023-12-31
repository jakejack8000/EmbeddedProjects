#include <stdio.h>
#include <stdlib.h>
void Print_Primes_in_Range(int a,int b){
for(int i=a;i<=b;i++){
    short is_prime = 1;  //replacement for bool
    for(int j=2;j<i;j++){
        if(i%j==0){is_prime=0;break;}
    }
    if(is_prime){printf("%d ",i);}
}
}
int main()
{
    int x;
    int y;
    printf("Enter range of numbers: ");
    scanf("%d",&x);
    scanf("%d",&y);
    Print_Primes_in_Range(x,y);
    return 0;
}
