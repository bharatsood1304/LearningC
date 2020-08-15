#include<stdio.h>

int main(){
    float var1 = 1.234567890123456;
    double var2 = 1.234567890123456;
    long double varx = 22.0/7.0;

    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));
    printf("%.16f\n", var1);
    printf("%.16f\n", var2);
    printf("%.21Lf\n", varx);
}
