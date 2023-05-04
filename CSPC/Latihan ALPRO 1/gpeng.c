#include <stdio.h>
int main(void){

//Input
    int n; //Gehu
    int m; //Bala-bala
    int k; //Pisang Goreng
    int h; //Cireng
    printf("");
    scanf("%d", &n);
    printf("");
    scanf("%d", &m);
    printf("");
    scanf("%d", &k);
    printf("");
    scanf("%d", &h);

    int laba = (n * 100) + (m * 150) + (k * 75) + (h * 175);

    int r; //Hari
    printf("");
    scanf("%d", &r);

//Output

    int keuntungan = laba * r;
    printf("%d\n", keuntungan);
    scanf("%d", &keuntungan);

    return 0;
}