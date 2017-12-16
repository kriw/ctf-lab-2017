#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void dummy() {
    system("/bin/sh");
}

int main() {
    char buf[101];
    read(0, buf, 100);
    printf(buf);
    printf("Bye");
    return 0;
}
