 \*arg pass return value*\
#include <stdio.h>
int varshi(){
    int x;
    printf("enter a number:");
    scanf("%d", &x);
    return x;
}
int main() {
    int num=varshi();
   printf("your value stored in function is %d",num);
}
nested function=>
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
