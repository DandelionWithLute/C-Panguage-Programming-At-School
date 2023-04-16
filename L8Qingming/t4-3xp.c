#include <stdio.h>
int main()
{
    int i, flag = 0;
    double a, b, result;
    char sym;
    // scanf("%lf\n", &a);
    // scanf("%c\n", &sym);
    // scanf("%lf\n", &b);
    scanf("%lf\n%c\n%lf", &a, &sym, &b);

    switch (sym)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b == 0)
        {
            flag=1;
            break;
        }
        else
        {
            result = a / b;
        }
        break;
    default:
        flag = 2;
        break;
    }

    if (flag == 0)
    {
        printf("%lf", result);
    }else if (flag ==1){
        printf("cant / 0");
    }
    else
    {
        printf("%c is an illegal charactor!", sym);
    }
    return 0;
}
