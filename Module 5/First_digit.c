#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    const firsDigit=n/1000;
    if (firsDigit%2==0)
    {
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    
    return 0;
}