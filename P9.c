#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n > 1 && flag == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
