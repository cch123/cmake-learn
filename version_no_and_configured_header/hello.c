#include <stdio.h>
#include <stdlib.h>
#include <HelloConfig.h>

int main() {
    printf("major: %d, minor: %d\n", Hello_VERSION_MAJOR, Hello_VERSION_MINOR);
    printf("hello world\n");
}