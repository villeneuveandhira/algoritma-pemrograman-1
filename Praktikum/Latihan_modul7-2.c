#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    scanf("%s", &str);

    int length = strlen(str),
        length_div = (length + 1) / 2;
    int i;

    i = 0;
    do {
        printf("%c", str[length - 1 - i]);
        i++;
    } while (i < length - length_div);
    printf("\n");

    i = 0;
    do {
        printf("%c", str[length_div - 1 - i]);
        i++;
    } while (i < length_div);
    printf("\n");

    return 0;
}