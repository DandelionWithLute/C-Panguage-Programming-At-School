#include <stdio.h>
int main()
{
    int a[10] = {20, 10, 66, 9, 40, 5, 6, 80, 3, 45};
    int min = 100;

    for (int j = 0; j < 10; j++)
    {
        if (min > a[j])
            min = a[j];
    }
    printf("%d ", min);
    printf("\n");
}