#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    char buf[0x20];
    system("echo Input Message");
    read(0, buf, 0x100);
    puts(buf);
    return 0;
}
