/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal tugas praktikum 8
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int x, i, j, k, l;  // Iterator.
    int max = 0;
    char bs = '\\';  // Variabel backslash.
    // char besar[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char kecil[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char s[255];      // Deklarasi string s berupa alamat directory awal (sebelum dienkripsi).
    scanf("%s", &s);  // Input(masukkan) untuk alamat directory awal.

    char dir[255][255];  // Deklarasi array of string untuk pecahan directory.
    char enc[255][255];  // Deklarasi array of string untuk hasil enkripsi directory.

    x = 0;  //... Inisialisasi.
    j = 0;
    for (i = 0; i < strlen(s); i++) {  // Looping sepanjang masukkan string.
        if (s[i] != bs) {              // Setiap folder dipisahkan dengan tanda backslash (\).
            dir[x][j] = s[i];          // String dipecah menjadi kumpulan string (array of string) berdasarkan folder-foldernya.
            dir[x][j + 1] = '\0';      // untuk memastikan akhir dari array of char-nya null.
            j++;                       // --- iterasi.
            if (j > max) {             // ukuran nama folder terpanjang dalam alamat directory yang diberikan
                max = j;               // Menyimpan ukuran folder terpanjang.
            }
        } else {    // Skip tanda backslash (\)
            j = 0;  // Reset indeks huruf setelah mengganti folder berikutnya.
            x++;    // --- iterasi.
        }
    }

    int Q = 0;                              // Q merupakan kunci enkripsi.
    for (i = 0; i < strlen(dir[x]); i++) {  // Q didapatkan dari penjumlahan ASCII string terakhir pada kumpulan string
        Q += (int)dir[x][i];                // Penjumlahan ASCII string terakhir array of string
        Q %= 26;                            // Total jumlah di-modulo 26 (Sebanyak huruf alfabet).
    }

    int P = 0;                  // Deklarasi variabel pembatas.
    for (i = 0; i <= x; i++) {  // Setelah itu, semua string dalam kumpulan string di enkripsi dengan mengganti setiap alfabet pada string dengan Q alfabet di setelahnya.
        for (j = 0; j < strlen(dir[i]); j++) {
            P = (int)dir[i][j];
            if (((P >= 65) && (P <= 90))) {  // Range ASCII untuk karakter huruf kapital.
                P += Q;                      // enkripsi.
                if (P > 90) {                // Karakter alfabet juga dianggap siklis, yaitu setelah z maka akan kembali ke a
                    P -= 26;                 // dikurangi 26 (total alfabet).
                }
            } else if (((P >= 97) && (P <= 122))) {  // Range ASCII untuk karakter huruf kecil.
                P += Q;
                if (P > 122) {
                    P -= 26;
                }
            }
            enc[i][j] = (char)P;  // Hasil enkripsi.
        }
    }

    /*
    Keluaran pertama merupakan pola dari kumpulan string yang telah di enkripsi.
    */

    printf(">> Pola Pesan <<\n");
    k = 0;                                  //... Inisialisasi.
    for (i = 0; i <= x; i++) {              // Untuk mempertinggi tingkat keamanan enkripsi, directory yang telah di enkripsi akan dikirimkan ke bagian penyelidikan dalam bentuk pola segi empat.
        l = 0;                              // Reset indeks huruf setelah mengganti folder berikutnya.
        for (j = 0; j < max; j++) {         // Lebar pola ke samping menyesuaikan dengan ukuran nama folder terpanjang dalam alamat directory yang diberikan.
            int y = (strlen(enc[i]) / 2);   // Folder lain yang namanya lebih pendek dibagi menjadi 2 bagian, kiri dan kanan.
            if (strlen(enc[i]) % 2 != 0) {  // Syarat jika total nama folder berjumlah ganjil.
                y++;                        //, maka indeks huruf bagian kiri ditambah 1.
            }
            if ((j > y - 1) && (j < max - (strlen(enc[i]) - y))) {  // Dimulai dari setelah bagian kiri && berakhir sebelum bagian kanan.
                printf("%c", kecil[k]);                             // Bagian tengah yang kosong diisi dengan huruf a-z.
                k++;                                                // secara berurutan.
                if (k == 26) {                                      // untuk mengembalikan nilai huruf a-z.
                    k = 0;                                          // Reset.
                }
            } else {                      // Dimulai sebelum atau sesudah bagian kosong.
                printf("%c", enc[i][l]);  // Bagian kiri atau kanan diisi dengan nama folder sesuai pembagian.
                l++;
            }
        }
        printf("\n");  // untuk spasi.
    }

    /*
    Keluaran kedua merupakan alamat directory akhir (setelah di enkripsi).
    */

    printf("\n>> Path Directory Terenkripsi <<\n");
    for (i = 0; i <= x; i++) {  // Looping untuk sebanyak string folder dalam array of string.
        printf("%s", enc[i]);   // Menampilkan hasil enkripsi yang dipisah setiap backslash (\).
        if (i != x) {           //, namun backslash (\) pada penulisan alamat directory awal
            printf("/");        // diganti dengan slash (/).
        }
    }

    /*
    Keluaran ketiga menampilkan directory sebelum dan setelah di enkripsi.
    */

    printf("\n\n>> Kamus <<\n");
    for (i = 0; i <= x; i++) {                                // Looping untuk sebanyak string folder dalam array of string.
        printf("%d. [%s] -> [%s]\n", i + 1, enc[i], dir[i]);  // Menampilkan directory setelah dan sebelum dienkripsi dengan penomoran.
    }

    return 0;
}