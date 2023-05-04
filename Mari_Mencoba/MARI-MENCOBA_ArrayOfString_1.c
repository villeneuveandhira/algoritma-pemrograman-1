#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char huruf[255];
    scanf("%s", &huruf);

    for (i = 0; i < strlen(huruf); i++) {
        if ((huruf[i] == 'a') || (huruf[i] == 'i') || (huruf[i] == 'u') || (huruf[i] == 'e') || (huruf[i] == 'o')) {
            printf("%d", i % 10);
        } else {
            printf("%c", huruf[i]);
        }
    }

    return 0;
}