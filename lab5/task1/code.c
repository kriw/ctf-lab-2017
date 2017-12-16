#include <stdio.h>
#include <unistd.h>

struct var {
    char buf[0x20];
    char *msg;
};
int main() {
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    struct var v = {
        .msg = "Hello!"
    };
    read(0, v.buf, 0x100);
    puts(v.msg);
    return 0;
}
