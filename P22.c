#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
