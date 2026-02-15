#include <stdio.h>
int rec(int n){
    if (n==0)
    {
        return 1;
    }
    int result=n*rec(n-1);
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    int ans=rec(n);
    printf("%d", ans);
    return 0;
}