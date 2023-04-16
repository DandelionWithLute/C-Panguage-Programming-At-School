#include <stdio.h>
int main()
{
    int a[10] = {20, 10, 66, 9, 40, 5, 6, 80, 3, 45};
    int b[9];
    int i;
    scanf("%d", &i);

    for (int j = 0; j < 9; j++)
    {
        if (j < i)
        {
            b[j] = a[j];
        }else {
            b[j] = a[j+1];
        }
        printf("%d ", b[j]);
    }
    printf("\n");
}