#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[100];
    char ch;
    int count=0;
    printf("Enter String to be counted: ");
    gets(string);
    for(int i=0;i<100;i++){
        if(string[i]==0){
            count=i;
            break;
        }
    }
    printf("String Length is %d\r\n",count);
    return 0;
}
