/*Saya Rifqi Fajar Indrayadi NIM 2101103 mengerjakan soal Kuis 1 Nomor 2 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>

int main() {

    double d1, d2, d3, d4;
    int tka1, tka2, tkb1, tkb2, ntp;
    int dpn1, dpn2, dpn3, dpn4, bkg1, bkg2, bkg3, bkg4;

    //scan input double
    scanf("%lf", &d1);
    scanf("%lf", &d2);
    scanf("%lf", &d3);
    scanf("%lf", &d4);

    //scan baris yg ingin ditukar
    scanf("%d %d", &tka1, &tka2);
    scanf("%d %d", &tkb1, &tkb2);

    //memisahkan yang depan
    dpn1 = d1; dpn2 = d2; dpn3 = d3; dpn4 = d4;

    //memisahkan yang belakang
    bkg1 = (d1 - dpn1) * 100 + 0.01; bkg2 = (d2 - dpn2) * 100 + 0.01; bkg3 = (d3 - dpn3) * 100 + 0.01; bkg4 = (d4 - dpn4) * 100 + 0.01;

    //tukar menukar 1
    if (((tka1 == 1) && (tka2 == 2)) || ((tka1 == 2) && (tka2 == 1))) {
        ntp = bkg1;
        bkg1 = bkg2;
        bkg2 = ntp;
    }

    else if (((tka1 == 1) && (tka2 == 3)) || ((tka1 == 3) && (tka2 == 1))) {
        ntp = bkg1;
        bkg1 = bkg3;
        bkg3 = ntp;
    }

    else if (((tka1 == 1) && (tka2 == 4)) || ((tka1 == 4) && (tka2 == 1))) {
        ntp = bkg1;
        bkg1 = bkg4;
        bkg4 = ntp;
    }

    else if (((tka1 == 2) && (tka2 == 3)) || ((tka1 == 3) && (tka2 == 2))) {
        ntp = bkg2;
        bkg2 = bkg3;
        bkg3 = ntp;
    }

    else if (((tka1 == 2) && (tka2 == 4)) || ((tka1 == 4) && (tka2 == 2))) {
        ntp = bkg2;
        bkg2 = bkg4;
        bkg4 = ntp;
    }

    else if (((tka1 == 3) && (tka2 == 4)) || ((tka1 == 4) && (tka2 == 3))) {
        ntp = bkg3;
        bkg3 = bkg4;
        bkg4 = ntp;
    }

    //tukar menukar 2
    if (((tkb1 == 1) && (tkb2 == 2)) || ((tkb1 == 2) && (tkb2 == 1))) {
        ntp = bkg1;
        bkg1 = bkg2;
        bkg2 = ntp;
    }

    else if (((tkb1 == 1) && (tkb2 == 3)) || ((tkb1 == 3) && (tkb2 == 1))) {
        ntp = bkg1;
        bkg1 = bkg3;
        bkg3 = ntp;
    }

    else if (((tkb1 == 1) && (tkb2 == 4)) || ((tkb1 == 4) && (tkb2 == 1))) {
        ntp = bkg1;
        bkg1 = bkg4;
        bkg4 = ntp;
    }

    else if (((tkb1 == 2) && (tkb2 == 3)) || ((tkb1 == 3) && (tkb2 == 2))) {
        ntp = bkg2;
        bkg2 = bkg3;
        bkg3 = ntp;
    }

    else if (((tkb1 == 2) && (tkb2 == 4)) || ((tkb1 == 4) && (tkb2 == 2))) {
        ntp = bkg2;
        bkg2 = bkg4;
        bkg4 = ntp;
    }

    else if (((tkb1 == 3) && (tkb2 == 4)) || ((tkb1 == 4) && (tkb2 == 3))) {
        ntp = bkg3;
        bkg3 = bkg4;
        bkg4 = ntp;
    }

    //print hasil
    printf("%d.%02d\n", dpn1, bkg1);
    printf("%d.%02d\n", dpn2, bkg2);
    printf("%d.%02d\n", dpn3, bkg3);
    printf("%d.%02d\n", dpn4, bkg4);

    return 0;
}
