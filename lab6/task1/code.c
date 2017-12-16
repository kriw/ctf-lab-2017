#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *msg = "Input: ";

int main() {
    char buf[0x20];
    write(1, msg, strlen(msg));
    read(0, buf, 0x100);
    return 0;
}
