#include <stdio.h>
#include <unistd.h>

int main() {
    char buf[101];
    read(0, buf, 100);
    printf(buf);
    return 0;
}
