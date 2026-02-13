#include <stdio.h>
void myfun(int x){
    x=20;
    printf("myFun X Er address:%p\n", &x);
}
int main() {
    int x=10;
    myfun(x);
    // printf("%d", x);
    printf("MainX Er address:%p\n", &x);
    return 0;
}
