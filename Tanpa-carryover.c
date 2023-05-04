#include <math.h>
#include <stdio.h>

int main() {
    int angka1 = 999, angka2 = 99, hasil = 0, temp;

    int i = 0;
    while (angka1 / 10 != 0 && angka2 / 10 != 0) {
        if (i > 0) {
            temp = ((angka1 % 10 + angka2 % 10) % 10) * 10;
        } else {
            temp = (angka1 % 10 + angka2 % 10) % 10;
        }
        hasil += temp;
        angka1 /= 10;
        angka2 /= 10;
        i++;
    }

    printf("%d\n", hasil);

    return 0;
}