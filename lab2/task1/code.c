#include <stdio.h>
#include <stdlib.h>

struct var {
    char buf[0x20];
    char path[0x20];
};
int main() {
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    struct var v = {
        .path = "/bin/date"
    };
    while (1) {
        puts("=======");
        puts("1. Date");
        puts("2. Exit");
        puts("=======");
        printf("choice: ");
        scanf("%s", v.buf);
        if(v.buf[0] == '1') {
            system(v.path);
        } else {
            exit(0);
        }
    }
    return 0;
}
