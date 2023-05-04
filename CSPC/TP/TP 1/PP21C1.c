/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal tugas praktikum 1 
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <math.h>

int main(){
/*  Variabel   */
    int p, l, t;  //(Panjang, Lebar, Tinggi) ruang tamu

    //INPUT
    scanf("%d", &p);
    scanf("%d", &l);
    scanf("%d", &t);

/*  Operation   */
    int L       = 2*(p*t) + 2*(l*t);  //Luas ruang tamu
    int waktu   = 100*L;          //Waktu

/*  Waktu (detik)   */
    int jam, sec, menit, detik;
    jam     = waktu / (60*60);
    sec     = waktu % (60*60);
    menit   = sec / 60;
    detik   = sec % 60;

    //OUTPUT
    printf("Luas ruang tamu : %d meter persegi\n", L);
    printf("Waktu menunggu  : %d jam, %d menit, %d detik\n", jam, menit, detik);

    return 0;
}