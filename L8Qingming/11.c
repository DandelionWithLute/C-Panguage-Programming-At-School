#include <stdio.h>
int main()
{
    int a;
    do
    {
        printf("Input a (0~1000):\n");
        scanf("%d", &a);
    } while (a <= 0 && a > 10000);
    do
    {
        printf("%d  ", a % 10);
        a/=10;
    } while (a > 0);
}