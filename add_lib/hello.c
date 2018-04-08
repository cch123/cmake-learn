#include <stdio.h>
#include <stdlib.h>
#include "HelloConfig.h"
#ifdef USE_MyMATH
#include "my_lib.h"
#endif

int add(int a, int b) {
    printf("main add");
    return a + b;
}

int main() {
    int a = 10, b = 101;
    #ifdef USE_MyMATH
    printf("%d\n", my_add(a, b));
    #else
    printf("%d\n", add(a, b));
    #endif
}
