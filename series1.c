/*method 2 in series*/
#include <stdio.h>
int main() {
    int n, six=0,seven=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
       if(i%2 !=0)
       {
           seven+=7;
       }
       else
       {
           six+=6;
        }
    }
       if(n%2 !=0)
       {
           printf("%d term of series %d",n,seven-7);}
       else
       {
           printf("%d term of series %d",n,six-6);
       }
       
       return 0;
}
