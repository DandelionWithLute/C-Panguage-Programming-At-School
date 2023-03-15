#include <stdio.h>
#include <math.h>
int main(void){
    double pi = 3.1415;
    double a = sin(pi/6);
    double b = sqrt(12.56);
    double c = a + b;
    printf("%lf,%lf,%lf\n",a,b,c);
    return 0;
}