/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal tugas praktikum 7
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char input[255];      // Deklarasi string masukkan.
    scanf("%s", &input);  // Input (masukkan).

    char kiri[255],  // Deklarasi string sebelum pemisah ("!").
        key[255];    //... variabel setelah pemisah.
    int i = 0,       //... iterator.
        j = 0;
    while (input[i] != '!') {  // Memeriksa array of char sebelum ("!").
        kiri[i] = input[i];    // Menyimpan ke array baru untuk kata sebelum tanda pemisah.
        kiri[i + 1] = '\0';    // untuk memastikan akhir dari array of char-nya null.
        i++;                   //--- iterasi.
    }
    while (i < strlen(input)) {  // Memeriksa array of char setelah ("!").
        i++;                     //--- iterasi.
        if (input[i] != '!') {
            key[j] = input[i];  // Menyimpan ke array baru untuk kata setelah tanda pemisah..
            j++;                //--- iterasi.
        }
    }

    char kata[255];  // Deklarasi array of char untuk tanpa kata kunci.
    int x = 0;       //... iterator.
    kata[0] = '\0';  // sebagai array of char awal yang kosong.
    i = 0;
    while (i < strlen(kiri)) {  // Looping sepanjang string sebelum ("!").
        char temp[255];         // untuk string sementara.
        int k = i;              // untuk memudahkan  iterator (i).
        /*
            akan dicek satu persatu dalam string sebelum ("!") sebanyak jumlah panjang string kata kunci.
        */
        j = 0;
        while (j < strlen(key)) {
            temp[j] = kiri[k];   // string sebelum ("!") akan dipisah semua sebanyak jumlah kata kunci dan disimpan dalam string sementara.
            temp[j + 1] = '\0';  // untuk memastikan akhir dari array of char-nya null.
            k++;                 //--- iterasi.
            j++;
        }
        if (strcmp(temp, key) != 0) {  // Pengecekkan dengan perbandingan string, jika dalam string sementara TIDAK SAMA dengan kata kunci.
            kata[x] = kiri[i];         // ,, maka disimpan ke array of char tanpa kunci.
            // kata[x + 1] = '\0';                         // untuk memastikan akhir dari array of char-nya null.
            x++;                                        // --- iterasi.
        } else {                                        // Jika string sementara SAMA kata kunci.
            j = i;                                      // Penanda letak indeks yang akan dicek.
            while (kiri[j] != '\0') {                   // untuk memastikan akhir dari array of char-nya null.
                kiri[j] = kiri[j + (strlen(key) - 1)];  // ,, maka letak indeks akan dilewat atau string sementara pada indeks tersebut dihapus.
                j++;                                    // --- iterasi.
            }
        }
        i++;
    }
    kata[x] = '\0';  // untuk memastikan akhir dari array of char-nya null.

    if (kata[0] == '\0') {                         // Jika array of char tidak ada nilai.
        printf("==== Inputan Tidak Valid! ====");  // ,, maka akan menampilkan keluaran.
    } else {                                       // Sebaliknya, jika array of char memiliki nilai.
                                                   // ... keluaran dengan aturan :

        /*
            1. Menampilkan kata tanpa kunci setelah menghilangkan kata kunci dari kata utama.
        */
        printf("Tanpa kunci: %s\n\n", kata);

        /*
            2. Setelah menghilangkan kata kunci, melakukan dekripsi sebanyak (dua) kali.
        */
        // DEKRIPSI PERTAMA
        char dekripsi[255];          // Deklarasi array of char baru untuk menyimpan dekripsi.
        int len = strlen(kata) - 1;  // variabel panjang array of char.
        int k = 0;                   // Indeks dekripsi.
        i = 0;
        j = len;
        do {
            dekripsi[k] = kata[i];              // Huruf ke-k diisi dengan indeks awal.
            if (len % 2 == 0) {                 // Jika kata berjumlah genap.
                if (i != len / 2) {             // batas sampai indeks tengah kata.
                    dekripsi[k + 1] = kata[j];  // ,, huruf setelah k diisi dengan indeks akhir.
                }
            } else {                        // Jika kata berjumlah ganjil.
                dekripsi[k + 1] = kata[j];  // ,, huruf...
            }
            k += 2;  // --- iterasi (k), ditambah 2 karena array of char diisi dengan (dua) karakter awal dan akhir.
            i++;     // --- iterasi (i).
            j--;     // --- iterasi (j), dikurang karena dari akhir sampai batas.
        } while (i <= (len / 2));
        // Batas pengulangan.
        dekripsi[len % 2 == 0 ? k - 1 : k] = '\0';  // untuk memastikan akhir dari array of char-nya null.
        printf("Dekripsi 1: %s\n\n", dekripsi);     // Menampilkan hasil dekripsi.

        // DEKRIPSI KEDUA
        int len_div = (len + 1) / 2;  // variabel panjang array of char yang dibagi (dua).
        printf("Dekripsi 2: ");
        i = 0;  //--- inisialisasi (i).
        k = 0;  //--- inisialisasi (k).
        do {
            printf("%c", dekripsi[len_div - 1 - i]);  // Menampilkan dekripsi yang ditukan pada indeks KURANG dari tengah-tengah.
            i++;                                      // --- iterasi (i).
            k++;                                      // --- iterasi (k).
        } while (i < len_div);                        // Batas pengulangan.

        i = 0;                                //--- inisialisasi (i).
        k = 0;                                //--- inisialisasi (k).
        if (len % 2 == 0) {                   // Syarat khusus untuk kata berjumlah ganjil (karena sudah dikurang (satu) pada saat deklarasi).
            printf("%c", dekripsi[len / 2]);  // Menampilkan dekripsi di indeks tengah-tengah.
        }
        do {
            if (len % 2 == 0) {
                if (i != len / 2) {                   // batas sampai indeks tengah kata.
                    printf("%c", dekripsi[len - i]);  // Menampilkan dekripsi yang ditukan pada indeks LEBIH dari tengah-tengah.
                }
            } else {
                printf("%c", dekripsi[len - i]);  // Menampilkan dekripsi yang ditukan pada indeks LEBIH dari tengah-tengah.
            }
            i++;                       // --- iterasi (i).
            k++;                       // --- iterasi (k).
        } while (i <= len - len_div);  // Batas pengulangan.
    }
    printf("\n");

    return 0;
}