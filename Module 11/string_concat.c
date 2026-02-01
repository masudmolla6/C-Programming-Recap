#include <stdio.h>
#include <string.h>
int main() {
    char a[101], b[101];
    scanf("%s%s", a,b);
    int lenA = strlen(a);
    int lenB = strlen(b);
    for (int i = 0; i <= lenB; i++)
    {
        a[lenA+i]=b[i];
    }

    printf("%s %s", a,b);
    
    return 0;
}