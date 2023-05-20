#include <stdio.h>
int main(void)
{
    int i, j, k, temp = 0;
    int a[10] = {87, 56, 73, 64, 92, 98, 61, 48, 75, 80};
    for (i = 0; i < 10; i++)
        printf("%4d ", a[i]);
    printf("\n");
    for (i = 0; i < 9; i++)
    {
        k = i;
        for (j = k + 1; j < 10; j++)
            if (a[k] < a[j])
                k = j;
        temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }
    for (i = 0; i < 10; i++) printf("%4d ", a[i]);
    printf("\n");
    return 0;
}