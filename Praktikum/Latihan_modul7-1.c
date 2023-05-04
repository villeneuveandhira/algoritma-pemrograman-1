#include <stdio.h>
#include <string.h>

int main() {
    char str_temp[100] = {'\0'};
    char str_max[100] = {'\0'};

    do {
        scanf("%s", &str_temp);
        if ((strlen(str_temp) > strlen(str_max)) && (strcmp(str_temp, "done") != 0)) {
            strcpy(str_max, str_temp);
        }
    } while (strcmp(str_temp, "done") != 0);

    printf("==============================\n");
    printf("string terpanjang adalah kata %s, panjangnya %d karakter", str_max, strlen(str_max));

    return 0;
}