#include<stdio.h>

int main(){
    int a = 3, b = 4;
    int incr;

    incr = (b > a) && (b++);
    printf("%d\n", incr);
    printf("%d", b);
    return 0;
}
