#include <stdio.h>
#include <math.h>

int main()
{
    /*      Variabels       */
    int x1, y1, x2, y2, jarak, kuadratx, kuadraty;
    int a, b;
    float akar;

    //INPUT
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &y1);
    scanf("%d", &y2);

    /*      Operator        */
    a = (x1 - x2);
    b = (y1 - y2);
    kuadratx = (a * a);
    kuadraty = (b * b);
    akar = sqrt(kuadratx);

    jarak = akar + kuadraty;

    //OUTPUT
    printf("%d", jarak);
    return 0;
}