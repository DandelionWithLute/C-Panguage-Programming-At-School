#include <stdio.h>
int main()
{
    int i = 0, count = 0;
    float total = 0, a[10], ave = 0.0;
    for (i = 0; i < 10; i++){
        scanf("%f", &a[i]);
        total += a[i];
    }
    ave = total / 10;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > ave)
        {
            count++;
        }
    }

    printf("average:%f\n", ave);
    printf("data:%d", count);
}