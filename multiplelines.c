#include<stdio.h>
#define greater(x,y) if (x>y)\
                            printf("%d is greater than %d", x,y);\
                        else\
                            printf("%d is lesser then %d", x,y);
int main(){
    greater(7,8);
    return 0;
}
