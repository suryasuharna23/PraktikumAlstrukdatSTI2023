#include <stdio.h>
#include "balikstring.c"

int main() {
    char str[100];
    scanf("%s", str);
    membalikString(str);
    printf("%s\n", str);
    return 0;
}