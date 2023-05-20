#include <stdio.h>
int main(void)
{
    double a[4][6] = {0}, sum = 0;
    int i = 0, j = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            a[i][j] = i * j + 1;
        }
    }
    for (i = 0; i < 4; i++)
    {
        sum = 0;
        for (j = 0; j < 5; j++)
        {
            sum += a[i][j];
        }
        a[i][5] = sum / 5;
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%5.1lf", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}