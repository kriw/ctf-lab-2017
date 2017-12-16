#include <stdio.h>

int main() {
    int hoge = 0;
    char str[] = "Hello, World";
    char buf[] = "Buffer";
    printf("%s\n", str);
    scanf("%20s", buf);
    printf("%s\n", str);
}
