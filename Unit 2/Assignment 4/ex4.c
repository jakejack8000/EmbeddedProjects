#include <stdio.h>
#include <stdlib.h>

int main(){
printf("Enter base Number: \n");
int x;
scanf("%d",&x);
printf("Enter power Number: \n");
int y;
scanf("%d",&y);
printf("%d^%d = %d\n",x,y,get_power(x,y));
return 0;
}

int get_power(int n, int m){
if(m==1){return n;}
return n*get_power(n,m-1);
}
