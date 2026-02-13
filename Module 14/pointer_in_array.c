#include <stdio.h>
int main() {
    int a[5]={2,3,4,6,4};
    *(a+1)=200;
    // printf("%d\n", *a);
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    // printf("%p\n", &a[4]);
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", a[i]);
    }
    
    return 0;
}