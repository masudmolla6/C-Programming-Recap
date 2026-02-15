#include <stdio.h>
int main() {
    int m,n;
    scanf("%d%d", &m,&n);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[m+n];
    for (int i = 0; i < m; i++)
    {
        c[i]=a[i];
    }

    for (int i = 0; i < n; i++)
    {
        c[i+m]=b[i];
    }

    for (int i = 0; i < m+n; i++)
    {
        printf("%d ", c[i]);
    }
    
    return 0;
}