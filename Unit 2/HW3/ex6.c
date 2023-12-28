#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[100];
    char ch;
    int count=0;
    printf("Enter String to be searched: ");
    gets(string);
    scanf("");
    strlwr(string);
    printf("\r\n");
    printf("Enter character to be counted: ");
    printf("\r\n");
    scanf("%c",&ch);
    strlwr(&ch);
    for(int i=0;i<100;i++){
        if(string[i]==ch){
            count++;
        }
    }
    printf("Character '%c' was found %d times!\r\n",ch,count);
    return 0;
}
