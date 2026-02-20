#include <stdio.h>
#include <string.h>

int main() {
    char ch[101];
    fgets(ch, 101, stdin);
    // printf("%s", ch);
    for (int i = 0; ch[i] != '\0'; i++)
    {
        printf("%c ", ch[i]);
    }
    

    return 0;
}
