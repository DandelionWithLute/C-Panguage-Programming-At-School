#include <stdio.h>
int main()
{
    int a, b, ans;
    char s;
    scanf("%lf%c%lf", &a, &s, &b);
    switch (s)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        switch (b)
        {
        case 0:
            printf("cannot / 0");
            break;
        default:
            ans = a / b;
            break;
        }
        break;
    default:
        printf("illegal operator");
        break;
    }
    printf("%d", ans);
    return 0;
}