#include <stdio.h>

int main()
{

    /*  Variabels   */
    int n;

    //INPUT
    (void)scanf("%d", &n);

    //OUTPUT

    /*  Loop    */
    //ST 1
    for (int i = 1; i <= n * 2; i++)
    {
        /*      Triangle 1      */
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        /*      Triangle 2      */
        for (int j = (n * 4) - 2; j >= (i * 2) - 1; j--)
        {
            printf(" ");
        }

        /*      Triangle 3      */
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            printf("*");
        }

        /*      Triangle 4      */
        for (int j = (n * 4) - 2; j >= (i * 2) - 1; j--)
        {
            printf(" ");
        }

        /*      Triangle 5      */
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    //ST 2
    for (int i = 1; i <= n; i++)
    {
        /*      Rectangle 1     */
        for (int j = 1; j <= (n * 2) + 1; j++)
        {
            printf(" ");
        }

        /*      Rectangle 2     */
        for (int j = 1; j <= (4 * n) - 3; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    //ST 3
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= (n * 5) - 3 + i; j++)
        {
            printf(" ");
        }

        for (int j = n; j >= i; j--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}