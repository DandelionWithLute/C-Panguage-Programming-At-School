#include <stdio.h>

int main()
{
    int a[10] = {20, 10, 66, 9, 40, 5, 6, 80, 3, 45};
    int b[10];
    int i;

    for (int j = 9; j >= 0; j--)
    {
        b[j] = a[9-j];
        printf("%d ", b[j]);
    }
    printf("\n");
}