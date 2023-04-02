#include <stdio.h>
int main()
{
    int sum7 = 0;
    for (int i = 1; i <= 50; i++)
    {
        if (i % 7 == 0)
        {
            sum7 += i;
        }
    }
    int sum3 = 0;
    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0)
        {
            sum3 += i;
        }
    }
    printf("%d\n",sum3);
    printf("%d\n",sum7);
    printf("%d",sum3-sum7);
}