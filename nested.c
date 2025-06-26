#include <stdio.h>
int calc(int num){
    printf("square  is %d is %d \n",num,num*num);
}
int input(){
    int x;
    printf("enter the value:");
    scanf("%d",&x);
    calc(x);
}
int main(){
    input();
    return 0;
}
