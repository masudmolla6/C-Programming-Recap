#include <stdio.h>
#include<string.h>

int recFun(char s[], int i){
    if (s[i]=='\0')
    {
        return 0;
    }
    
    int count=0;
    if (tolower(s[i])=='a' || tolower(s[i])=='e' ||
    tolower(s[i])=='i' || tolower(s[i])=='o' ||
    tolower(s[i])=='u')
    {
        count++;
    }
    return count + recFun(s, i+1);
}

int main() {
    char s[201];
    fgets(s,201,stdin);

    int ans = recFun(s,0);
    printf("%d\n", ans);

    return 0;
}
