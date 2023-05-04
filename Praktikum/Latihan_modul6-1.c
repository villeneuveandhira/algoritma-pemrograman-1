#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    char kata[n];
    for (i = 0; i < n; i++) {
        scanf(" %c", &kata[i]);
    }

    int yes = 0, indeks;

    i = 0;
    while ((i < n) && (yes == 0)) {
        if ((kata[i] == 'a') || (kata[i] == 'A')) {
            yes = 1;
            indeks = i;
        }
        i++;
    }

    if (yes == 1) {
        printf("Ada huruf a, yang pertama di index ke-%d\n", indeks);
    } else {
        printf("Tidak ada huruf a\n");
    }

    return 0;
}