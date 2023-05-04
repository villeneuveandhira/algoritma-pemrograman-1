#include <stdio.h>
int main(void){
//INPUT
    //Domba Garut
    int n;
    int m;
    int p;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    //Waktu per-MENIT
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

//Jumlah (MENIT)
int total, sec;
    total = (n*a) + (m*b) + (p*c);
    sec = total*60;

//Konversi Menit ke JAM
int jam, menit, detik;
    jam=sec / (60*60);
    sec= sec-((60*60)*jam);
    menit=sec / 60;
    detik= sec - (60*menit);


//OUTPUT
    printf("%02d:%02d:%02d\n", jam, menit, detik);

    return 0;
}