#include<stdio.h>
int main()
{
    int n=10,k=5;
    int sale;
    scanf("%d",&sale);
    if (sale>=1 && sale<=5)
    {
        printf("NUMBER OF CANDIES SOLD: %d \n",sale);
        printf("NUMBER OF CANDIES LOST: %d \n",n-sale);
    }
    else
    {
        printf("INVALID INPUT \n");
        printf("NUMBER OF CANDIES LEFT: %d",n);
    }
    return 0;
}
