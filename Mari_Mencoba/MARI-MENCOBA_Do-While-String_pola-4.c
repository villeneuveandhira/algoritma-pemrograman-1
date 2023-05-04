#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    scanf("%s", &str);
    int i, j, spasi = 0;

    for (i = strlen(str) - 1; i >= 0; i--) {
        for (j = strlen(str) - 1; j > spasi; j--) {
            printf(" ");
        }
        printf("%c\n", str[i]);
        spasi++;
    }

    return 0;
}