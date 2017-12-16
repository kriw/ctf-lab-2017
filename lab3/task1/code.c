#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int n = 0;
char *gatcha[] = {"tendon", "katsudon", "oyakodon"};
int main() {
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    srand(time(NULL));
    char buf[0x100];
    n = rand() % 3;
    char *result = gatcha[n];

    printf("Name: ");
    scanf("%s", buf);
    printf("Hi, ");
    printf(buf);
    printf("\ngatcha");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    puts("ﾎﾞﾛﾝ");
    if (n == 3) {
        puts("You are lucky!!");
        system("/bin/sh");
    } else {
        puts(result);
    }
    return 0;
}

