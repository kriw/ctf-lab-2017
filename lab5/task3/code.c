#include <stdio.h>
#include <unistd.h>

int main() {
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    char buf[0x20];
    while (1) {
        puts("========");
        puts("1.Message");
        puts("2.Exit");
        puts("========");
        int n = read(0, buf, 0x100);
        buf[n] = '\0';
        if(buf[0] == '1') {
            printf(buf);
        } else if(buf[0] == '2'){
            break;
        }
    }
    return 0;
}
