#include <stdio.h>
#include <stdlib.h>

void shell() {
    system("/bin/sh");
}

int main() {
    char buf[0x10];
    printf("Input: ");
    scanf("%s", buf);
    return 0;
}
