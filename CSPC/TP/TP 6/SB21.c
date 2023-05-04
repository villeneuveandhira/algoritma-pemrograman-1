/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal tugas praktikum 6
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>

typedef struct {           // Deklarasi bungkusan.
    int kode_biner[8],     // untuk menyimpan kode biner.
        jumlah,            // --------------- perubahan jumlah.
        stok_awal;         // --------------- jumlah awal.
    char kode_barang,      // --------------- kode barang.
        nama_barang[100];  // --------------- nama barang.
} stok_barang;             // Nama bungkusan.

int main() {
    int n, i, j, k,           // Deklarasi cariabel (input, iterator).
        jumlah_terjual;       // untuk menyimpan jumlah terjual.
    char kode_terjual = '0';  // --------------- kode barang terjual.
    scanf("%d", &n);          // Input (masukkan) user untuk jumlah jenis barang.
    stok_barang jenis[n];     // Deklarasi array of tipe terstruktur jenis barang.

    for (i = 0; i < n; i++) {                 // untuk pengecekkan sejumlah jenis barang.
        scanf(" %c", &jenis[i].kode_barang);  // Input kode barang.
        char a = 'a';                         // Deklarasi variabel sementara nama barang.
        j = 0;
        while (a != ';') {                // Menggunakan while, karena nama barang akan berhenti sampai inputan ; (titik koma).
            scanf(" %c", &a);             // Input nama barang disimpan dalam variabel sementara.
            jenis[i].nama_barang[j] = a;  // nama barang diisi dalam array of tipe terstruktur.
            j++;                          //---iterasi.
        }
        for (j = 0; j < 8; j++) {                  // 8 digit kode biner.
            scanf("%d", &jenis[i].kode_biner[j]);  // Input kode biner.
        }
    }

    /*
    Konversi biner ke desimal.
    */
    for (i = 0; i < n; i++) {                   // untuk pengecekkan dalam sejumlah jenis barang.
        int temp = 0;                           // Deklarasi variabel temporary.
        k = 0;                                  // Deklarasi variabel pangkat dalam biner dari kanan ke kiri.
        for (j = 7; j >= 0; j--) {              // untuk pengecekkan indeks biner dari kanan ke kiri.
            if (jenis[i].kode_biner[j] == 1) {  // Jika indeks biner bernilai 1,
                int pangkat = 1;
                for (int x = 0; x < k; x++) {  // Looping sebanyak k, untuk dikalikan menjadi pangkat.
                    pangkat *= 2;
                }
                temp += jenis[i].kode_biner[j] * pangkat;  // variabel temporary diisi dengan hasil jumlah konversi biner.
            }
            k++;  // pangkat terus naik 1 maupun nilai indeks biner 0 atau 1.
        }
        jenis[i].stok_awal = temp;  // konversi biner ke desimal disimpan dalam stok awal.
        jenis[i].jumlah = temp;     // konversi biner ke desimal disimpan dalam jumlah.
    }

    int update = 0;                   // Deklarasi variabel batas jika stok barang tetap/update.
    while (kode_terjual != '*') {     // Kondisi input terus ada sebelum ada '*'.
        scanf(" %c", &kode_terjual);  // Input kode barang yang terjual.
        if (kode_terjual == '*') {    // Input akan berhenti jika ada '*'.
            break;
        }
        scanf(" %d", &jumlah_terjual);                   // Input jumlah barang yang terjual.
        for (i = 0; i < n; i++) {                        // untuk pengecekkan dalam sejumlah jenis barang.
            if (jenis[i].kode_barang == kode_terjual) {  // Kondisi syarat untuk menyamakan kode barang awal dengan terjual.
                jenis[i].jumlah -= jumlah_terjual;       // untuk mengupdate jumlah barang setelah terjual.
            }
            if (jenis[i].jumlah < 0) {  // Kondisi syarat jika hasil update jumlah minus atau dibawah 0.
                jenis[i].jumlah = 0;    // akan diisi dengan jumlah 0.
            }
        }
        update++;
    }

    /*
    Output (keluaran) atau tampilan.
    */
    printf("Stok Barang Awal\n");
    for (i = 0; i < n; i++) {  // untuk pengecekkan dalam sejumlah jenis barang.
        printf("-");
        printf(" %c ", jenis[i].kode_barang);  // menampilkan kode barang.
        int j = 0;
        while (jenis[i].nama_barang[j] != ';') {    // di-looping karena nama barang merupakan tipe data array.
            printf("%c", jenis[i].nama_barang[j]);  // menampilkan nama barang barang sebelum diakhiri dengan ';' (titik koma).
            j++;
        }
        printf(" %d\n", jenis[i].stok_awal);  // menampilkan jumlah awal hasil konversi biner ke dalam bentuk desimal.
    }

    printf("\n");  //---spasi.

    if (update > 0) {  // Jika ADA barang yang terjual,
        printf("Stok Barang Update\n");
        for (i = 0; i < n; i++) {
            printf("-");
            printf(" %c ", jenis[i].kode_barang);  // menampilkan kode barang.
            int j = 0;
            while (jenis[i].nama_barang[j] != ';') {    // di-looping karena nama barang merupakan tipe data array.
                printf("%c", jenis[i].nama_barang[j]);  // menampilkan nama barang barang sebelum diakhiri dengan ';' (titik koma).
                j++;
            }
            printf(" %d\n", jenis[i].jumlah);  // menampilkan jumlah setelah terjual.
        }
    } else {                           // Jika TIDAK ada barang yang terjual,
        printf("---Stok Tetap---\n");  // menampilkan stok tetap atau tidak berubah.
    }

    return 0;
}