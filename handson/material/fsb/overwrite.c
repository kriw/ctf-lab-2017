#include <stdio.h>

int main() {
    int a = 0;
    printf("test\n");
    printf("123456789%n\n", &a);
    printf("a: %d\n", a);
    return 0;
}
