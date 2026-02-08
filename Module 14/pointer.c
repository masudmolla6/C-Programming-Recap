#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int *ptr;
    ptr=&x;
    printf("%p", ptr);
    return 0;
}