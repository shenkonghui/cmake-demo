#include "add.h"
#include <stdio.h>

int cal(){
    int a = 1;
    int b = 2;
    int c = add(a, b);
    printf("a+b=%d", c);
    return c;
}
