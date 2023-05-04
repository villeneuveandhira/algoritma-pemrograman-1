/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal kuis 1
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>

int main()
{
    double satu, dua, tiga, empat; //Variabel double untuk menampung empat input user
    int a1, a2, b1, b2;            //Variabel yang akan ditukar baris satu dan dua
    int depan1, depan2;            //Variabel untuk menampung angka di depan koma
    double belakang1, belakang2;   //Variabel untuk menampung angka di belakang koma
    double a1x, a2x, b1x, b2x;     //Variabel untuk menampung angka penukaran sementara

    //INPUT (Masukkan)
    scanf("%lf %lf %lf %lf", &satu, &dua, &tiga, &empat); //Masukkan untuk empat bilangan riil yang ingin ditukar
    scanf("%d %d %d %d", &a1, &a2, &b1, &b2);             //Masukkan dua baris pertukaran bilangan

    /*    Switch untuk bilangan yang ingin ditukar    */
    switch (a1) //Untuk bilangan pertama baris ke-satu
    {
    case 1:
        a1x = satu; //Bilangan satu yang akan ditukar
        break;
    case 2:
        a1x = dua; //Bilangan dua...
        break;
    case 3:
        a1x = tiga; //Bilangan tiga...
        break;
    default:
        a1x = empat; //dst.
        break;
    }

    switch (a2) //Untuk bilangan kedua baris ke-satu
    {
    case 1:
        a2x = satu; //Bilangan satu yang akan ditukar
        break;
    case 2:
        a2x = dua; //Bilangan dua...
        break;
    case 3:
        a2x = tiga; //dst.
        break;
    default:
        a2x = empat;
        break;
    }

    switch (b1) //Untuk bilangan pertama baris ke-dua
    {
    case 1:
        b1x = satu; //Bilangan satu yang akan ditukar
        break;
    case 2:
        b1x = dua; //dst.
        break;
    case 3:
        b1x = tiga;
        break;
    default:
        b1x = empat;
        break;
    }

    switch (b2) //Untuk bilangan kedua baris ke-satu
    {
    case 1:
        b2x = satu; //Bilangan satu yang akan ditukar
        break;
    case 2:
        b2x = dua; //dst.
        break;
    case 3:
        b2x = tiga;
        break;
    default:
        b2x = empat;
        break;
    }

    /*    Penukaran angka di depan dan di belakang koma    */
    //Baris Satu
    depan1 = a1x;             //Mengambil angka di depan koma dari bilangan pertama baris satu
    belakang1 = a1x - depan1; //Mengambil angka di belakang koma dari bilangan
    a1x = depan1;             //Mengubah bilangan menjadi angka di depan koma saja

    depan2 = a2x;             //Mengambil angka di depan koma dari bilangan kedua baris satu
    belakang2 = a2x - depan2; //Mengambil angka di belakang koma dari bilangan
    a2x = depan2;             //Mengubah bilangan menjadi angka di depan koma saja

    a1x += belakang2; //Pertukaran angka di belakang koma
    a2x += belakang1;

    //Baris Dua
    depan1 = b1x;             //Mengambil angka di depan koma dari bilangan pertama baris dua
    belakang1 = b1x - depan1; //Mengambil angka di belakang koma dari bilangan
    b1x = depan1;             //Mengubah bilangan menjadi angka di depan koma saja

    depan2 = b2x;             //Mengambil angka di depan koma dari bilangan kedua baris dua
    belakang2 = b2x - depan2; //Mengambil angka di belakang koma dari bilangan
    b2x = depan2;             //Mengubah bilangan menjadi angka di depan koma saja

    b1x += belakang2; //Pertukaran angka di belakang koma
    b2x += belakang1;

    /*    Switch untuk bilangan setelah ditukar    */
    switch (a1)
    {
    case 1:
        satu = a1x; //Menempatkan pertukaran bilangan pertama baris satu
        break;
    case 2:
        dua = a1x; //Menempatkan pertukaran bilangan kedua
        break;
    case 3:
        tiga = a1x; //Bilangan ketiga
        break;
    default:
        empat = a1x; //dst.
    }

    switch (a2)
    {
    case 1:
        satu = a2x; //Menempatkan pertukaran bilangan kedua baris satu
        break;
    case 2:
        dua = a2x; //Menempatkan pertukaran bilangan kedua
        break;
    case 3:
        tiga = a2x; //Bilangan ketiga
        break;
    default:
        empat = a2x; //dst.
    }

    switch (b1)
    {
    case 1:
        satu = b1x; //Menempatkan pertukaran bilangan pertama baris dua
        break;
    case 2:
        dua = b1x; //Menempatkan pertukaran bilangan kedua
        break;
    case 3:
        tiga = b1x; //Bilangan ketiga
        break;
    default:
        empat = b1x; //dst.
    }

    switch (b2)
    {
    case 1:
        satu = b2x; //Menempatkan pertukaran bilangan kedua baris dua
        break;
    case 2:
        dua = b2x; //Menempatkan pertukaran bilangan kedua
        break;
    case 3:
        tiga = b2x; //Bilangan ketiga
        break;
    default:
        empat = b2x; //dst.
    }

    //OUTPUT (Keluaran)
    printf("%.2lf\n", satu);  //Menampilkan keluaran bilangan pertama setelah ditukar
    printf("%.2lf\n", dua);   //Menampilkan bilangan kedua
    printf("%.2lf\n", tiga);  //Bilangan ketiga
    printf("%.2lf\n", empat); //dst.

    return 0;
}