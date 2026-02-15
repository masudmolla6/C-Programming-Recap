#include <stdio.h>
long long int rec(int n){
    if (n==1)
    {
        return 1;
    }
    long long int result=rec(n-1);
    return n*result;
}

int main() {
    int n;
    scanf("%d", &n);
    long long int ans=rec(n);
    printf("%lld\n", ans);
    return 0;
}