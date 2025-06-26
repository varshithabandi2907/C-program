/*atm access*/
#include<stdio.h>
int main()
{
    int pin,enter_pin,balance=5000,withdraw;
    pin=1123;
    printf("enter your pin:");
    scanf("%d",&enter_pin);
    if(enter_pin==pin)
    {
        printf("PIN verified");
        printf("enter the amount you want to with-draw:");
        scanf("%d",&withdraw);
        if(withdraw<=balance)
        {
            balance -=withdraw;
            printf("withdrawl successful. Remaining balance: %d \n",balance);
        }
        else
        {
            printf("Insufficent balance\n");
        }
    }
    else
    {
        printf("incorrect pin");
    }

       return 0;
    }
