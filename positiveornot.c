/* check whether a number is positive or not */
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("the number is positive");
    }
    else{
        printf("the number is negitive");
    }
    return 0;
}
