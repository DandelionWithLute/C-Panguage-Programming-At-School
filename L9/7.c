#include <stdio.h>
#define N 5
int main()
{
    int a[N + 1] = {1, 2, 4, 5, 6}; /*在a数组中多开辟了一个空间，便于插入新元素*/
    int b[N + 1];
    int x, i, j;
    printf("Please input an Integer: ");
    scanf("%d", &x);//9
    printf("Please input a position: ");
    scanf("%d", &j);//3
    for (i = 0; i < N + 1; i++)
    {
        if (i >= j-1)
        {
            b[i] = a[i - 1];
        }else{
            b[i] = a[i];
        }
    }
    b[j - 1] = x;
    for (i = 0; i < N + 1; i++)
    {
        printf("%d ", b[i]);
    }
}