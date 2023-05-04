#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    char str[n][255];

    for (i = 0; i < n; i++) {
        for (j = 0; j < strlen(str[i]); j++) {
            scanf("%s", &str[i]);
            scanf("%s", &str[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < strlen(str[i]); j++) {
            printf("%s", &str[i]);
            printf("%s", &str[i][j]);
        }
    }
    return 0;
}