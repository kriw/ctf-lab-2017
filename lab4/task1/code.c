#include <stdio.h>
#include <stdlib.h>

void kick_shell() {
    system("/bin/sh");
}

int main() {
    char buf[0x100];
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    printf("Name: ");
    scanf("%s", buf);
    printf("Hi, ");
    printf(buf);
    exit(0);
}

