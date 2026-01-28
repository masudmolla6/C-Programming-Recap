#include <stdio.h>
int main() {
    int a;
    float f;
    char g;

    scanf("%d %f %c", &a,&f,&g);
 
    printf("%d %.2f %c", g,f,g);

    return 0;
}