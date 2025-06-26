#include<stdio.h>
void main()
{
int a,b;
printf("Enter a and b values:");
scanf("%d %d",&a, &b);
printf("Before swap a= %d and b= %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n After swap a =%d and b=%d", a,b);
}
