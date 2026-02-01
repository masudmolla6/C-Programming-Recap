#include <stdio.h>
int main() {
    char a[11];
    // scanf("%s", &a);
    fgets(a,10,stdin);
    printf("%s", a);
    return 0;
}