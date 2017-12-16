#include <stdio.h>
#include <string.h>

int main() {
    char buf[20];
    memset(buf, '\0', 20);
    printf("username: ");
    scanf("%10s", buf);
    if(!strcmp(buf, "someuser")) {
        printf("Correct!\n");
    } else {
        printf("Wrong...\n");
    }
    return 0;
}
