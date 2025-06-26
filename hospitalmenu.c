/*HOSPITAL MENU( ENTER, BILL, EXIT)*/
#include <stdio.h>
#include<math.h>
int main()
{
   int choice,patient_count=0,age,disease_code;
   float bill,total_bill=0;
   do
   {
     printf("\n----hosiptal menu----\n");
     printf("1.Add patient \n");
     printf("2.View total bill \n");
     printf("3.Exit \n");
     printf("\n Enter your choice:");
     scanf("%d",&choice);
     if(choice==1)
     {
        patient_count++;
        scanf("enter age of patient");
        printf("enter age of patient:");
        scanf("%d",&age);
        printf("enter disease: \n");
        printf("1.fever \n");
        printf("2.infection \n");
        printf("3.surgery \n");
        printf("\n enter your choice of disease code(1-3):");
        scanf("%d",&disease_code);
        printf("enter estimated bill:");
        scanf("%f",&bill);
        if(disease_code==1)
        {
            printf("disease fever \n");
        }
        else if(disease_code==2)
        {
            printf("disease infection \n ");
        }
        else if(disease_code==3)
        {
            printf("disease surgery \n");
        }
        else
        {
            printf("invalid code,enter b/w (1-3)");
        }
        total_bill+=bill;;
        printf("patient added succesfully: \n");
      }
     else if(choice==2)
     {
         printf("\n total patients:%d \n",patient_count);
         printf("\n total hospital bill: %.2f \n",total_bill);
     }
     else if(choice==3)
     {
        printf("thank u for visitng \n"); 
     }
     else
     {
         printf("invalid choice,try again!!!!");
     }
    }while(choice!=3);
    return 0;
}
