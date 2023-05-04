#include <stdio.h>

int main()
{
    /*      Variabels       */
    int n, satuan, puluhan, ratusan, ribuan;

    //INPUT
    scanf("%d", &n);

    /*      Operator        */
    ribuan = n / 1000;
    ratusan = (n - (ribuan * 1000)) / 100;
    puluhan = (n - (ribuan * 1000) - (ratusan * 100)) / 10;
    satuan = (n - (ribuan * 1000) - (ratusan * 100) - (puluhan * 10));

    //OUTPUT
    /*      Condition 1     */
    if ((n < 10) && (n != 0))
    {
        printf("satuan  : %d\n", satuan);
    }

    /*      Condition 2     */
    if ((n >= 10) && (n < 100))
    {
        printf("puluhan : %d\n", puluhan);
        printf("satuan  : %d\n", satuan);
    }

    /*      Condition 3     */
    if ((n >= 100) && (n < 1000))
    {
        printf("ratusan : %d\n", ratusan);
        printf("puluhan : %d\n", puluhan);
        printf("satuan  : %d\n", satuan);
    }

    /*      Condition 4     */
    if ((n >= 1000))
    {
        printf("ribuan  : %d\n", ribuan);
        printf("ratusan : %d\n", ratusan);
        printf("puluhan : %d\n", puluhan);
        printf("satuan  : %d\n", satuan);
    }

    return 0;
}