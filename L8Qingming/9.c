#include <stdio.h>
int main()
{
    int a;
    
    for (int i = 0 ;i < 1000;i++)
    {
    do
    {
        printf("Input a (0~1000):\n");
        scanf("%d", &a);
    } while (a <= 0 && a > 10000);
    do
    {
        printf("%d  ", a % 10);
        a /= 10;
    } while (a > 0);


        printf("Input a (0~1000):\n");
        scanf("%d", &a);
    }
}