#include <math.h>
#include <stdio.h>

int main() {
    // Deklarasi Variabel
    int n,  // Domba Garut.
        m,  // Anak domba pertahun setiap 2 domba garut.
        p,  // Domba yang dijual setelah tahun ke-3.
        r,  // Tahun.
        i;  // Interator

    scanf("%d %d %d %d", &n, &m, &p, &r);  // Input (masukkan)

    for (i = 0; i < r; i++) {
        n += ((n / 2) * m);  // Kang Cecep memiliki n domba garut, setiap dua ekor domba menghasilkan m ekor anak dalam setahun.
        if (i >= 2) {        // Setiap tahun Kang Cecep menjual p ekor domba dan baru bisa dijual setelah tahun ke 2 (mulai tahun ke- 3)
            n -= p;
        }
    }

    printf("%d\n", n);  // Menampilkan total jumlah domba garut milik Kang Cecep.

    return 0;
}