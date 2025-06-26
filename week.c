#include<stdio.h>
int main()
{
    int day;
    printf("enter the number(1-7) for day");
    scanf("%d",&day);
    switch (day) 
    {
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday\n");
        break;
        case 3:
        printf("wednesday\n");
        break;
        case 4:
        printf("thursday\n");
        break;
        case 5:
        printf("friday\n");
        break;
        case 6:
        printf("saturday\n");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("Invaild day");
    }
    return 0;
}
