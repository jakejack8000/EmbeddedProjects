#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[100];
    char ch;
    int count=0;
    printf("Enter String to be reversed: ");
    gets(string);
    int length = strlen(string);
    char revString[length];
    for(int i=0;i<length;i++){
        revString[i] = string[length-i-1];
    }
    printf("Reversed string is %s\r\n",revString);
    return 0;
}
