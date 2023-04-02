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
        ans = a / b;
        break;
    default:
        break;
    }
    printf("%d", ans);
    return 0;
}