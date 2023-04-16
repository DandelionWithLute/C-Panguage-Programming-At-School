#include <stdio.h>
int main()
{
    int a[10] = {20, 10, 66, 9, 40, 5, 6, 80, 3, 45};
    int b[10];
    int i;
    scanf("%d", &i);

    for (int j = 0; j < 10; j++)
    {
        if (j + i < 10)
        {
            b[j] = a[j + i];
        }
        else
        {
            b[j] = a[j + i - 10];
        }
        printf("%d ", b[j]);
    }
    printf("\n");
}