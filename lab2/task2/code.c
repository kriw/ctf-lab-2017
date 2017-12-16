#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    char buf[0x100];
    int n = read(0, buf, 0x1000);
    if (n == 0x41414141) {
        system("/bin/sh");
    }
    return 0;
}
