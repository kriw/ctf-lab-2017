#include <stdio.h>
#include <stdlib.h>

struct var {
    char buf[20];
    int is_admin;
};
int main() {
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    struct var v = {
        .is_admin = 0
    };
    puts("Do you want to login?");
    scanf("%s", v.buf);
    if (v.buf[0] == 'y' && v.is_admin) {
        puts("Login succeeds!");
        system("/bin/sh");
    } else if(v.buf[0] == 'y') {
        puts("You are not admin.");
    } else {
        puts("Bye");
    }
}
