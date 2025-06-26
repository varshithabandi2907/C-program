/* 1 1 2 3 4 9 8 12 */
#include <stdio.h>
#include <math.h>  
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 != 0) {
        printf("%d\n", (int)pow(2, n / 2));
    } else {  
        printf("%d\n", (int)pow(3, (n / 2) - 1));
    }
    
    return 0;
}
