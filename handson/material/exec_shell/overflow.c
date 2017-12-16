#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct A {
    char *password;
    char buf[0x20];
    char cmd[0x10];
};

int main() {
    struct A a = {
        .password = "password",
        .cmd = "whoami"
    };
    printf("Password: ");
    scanf("%s", a.buf);
    if(!strcmp(a.password, a.buf)) {
        printf("Execute Command: %s\n", a.cmd);
        system(a.cmd);
    }
    return 0;
}
