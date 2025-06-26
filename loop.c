#include <stdio.h>
int main() {
    int n, i, j, fact, sfact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact = 1;
        for (j = 1; j <= i; j++) {
            fact *= j;
        }
        sfact *= fact;
    }
    printf("Super factorial of %d is %d\n", n, sfact);

    return 0;
}
