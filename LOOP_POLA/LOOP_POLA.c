#include <stdio.h>

int main() {
    /*  Variabels   */
    int n;

    // INPUT
    scanf("%d", &n);

    // OUTPUT
    printf("\n");

    /*  Loop    */
    // Pattern 0
    for (int i = 0; i < n; i++) {
        printf("0\n");
    }
    /*
    0
    0
    0
    0
    */

    printf("\n");

    // Pattern 1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("1");
        }
        printf("\n");
    }
    /*
    1
    11
    111
    1111
    */

    printf("\n");

    // Pattern 2
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            printf("2");
        }
        printf("\n");
    }
    /*
    2222
    222
    22
    2
    */

    printf("\n");

    // Pattern 3
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        for (int k = n; k > i; k--) {
            printf("3");
        }
        printf("\n");
    }
    /*
    3333
     333
      33
       3
    */

    printf("\n");

    // Pattern 4
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("4");
        }
        printf("\n");
    }
    /*
       4
      44
     444
    4444
    */

    printf("\n");

    // Pattern 5
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i) - 1; k++) {
            printf("5");
        }
        printf("\n");
    }
    /*
       5
      555
     55555
    5555555
    */

    printf("\n");

    // Pattern 6
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int k = n; k >= (2 * i - n); k--) {
            printf("6");
        }
        printf("\n");
    }
    /*
    6666666
     66666
      666
       6
    */

    printf("\n");

    // Pattern 7
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (int k = 0; k < n; k++) {
            printf("7");
        }
        printf("\n");
    }

    printf("\n");

    // Pattern 8
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf(" ");
        }
        for (int k = 0; k < n; k++) {
            printf("8");
        }
        printf("\n");
    }

    printf("\n");

    // Pattern 9
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("0");
        }
        printf("1");
        for (int k = n - 1; k > i; k--) {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}