#include <stdio.h>
int main() 
{
    int num,sum=0,temp=0;
    printf("enter a number");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        sum += num%10;
        num /=10;
    }
    if(temp%sum==0){
        printf("%d is niven number.\n",temp);
			    }
    else{
        printf("%d is not a niven number.",temp);
    }
    return 0;
}
