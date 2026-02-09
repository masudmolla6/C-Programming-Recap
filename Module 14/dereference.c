#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int *ptr=&x;
    *ptr=345;
    printf("%d\n", *ptr);
    return 0;
}
