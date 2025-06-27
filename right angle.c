/* n-1=> right angle*/
#include <stdio.h>
int main() {
    char ch='A';
    int i,j,k,n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-1;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%c",ch);
            ch++;
            }
            printf("\n");
    }       
    return 0;
}
