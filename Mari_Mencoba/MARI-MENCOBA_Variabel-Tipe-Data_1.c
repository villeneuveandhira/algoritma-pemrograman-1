#include <stdio.h>
int main (){

    int alas; //Variabel bilangan alas
    int tinggi; //Variabel bilangan tinggi

    //Input
    printf("Menghitung Luas Segitiga\n");   
    printf("\n");
    printf("Masukkan alasnya:\n");
    scanf("%d", &alas);
    printf("Masukkan tingginya:\n");
    scanf("%d", &tinggi);

    //Variabel hasil luas
    int luas = alas * tinggi / 2;

    //Output
    printf("Hasil Luas Segitiga = %d\n", luas);
    scanf("%d", &luas);

    return 0;
}