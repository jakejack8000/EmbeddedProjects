#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);

    float temp = a;
    a=b;
    b=temp;

    printf("After swapping value of a: %f\r\n",a);
    printf("After swapping value of b: %f\r\n",b);

    return 0;
}
