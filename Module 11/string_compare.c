#include <stdio.h>
#include <stdbool.h>
int main() {
    char a[101], b[101];
    scanf("%s%s", a,b);
    int i=0;
    while (true)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("Equal");
            break;
        }
        else if(a[i]=='\0'){
            printf("a is amaller");
            break;
        }
        else if(b[i]=='\0'){
            printf("b is smaller");
            break;
        }
        else if(a[i]==b[i]){
            i++;
        }
        else if(a[i]<b[i]){
            printf("a is smaller");
            break;
        }
        else if(b[i]<a[i]){
            printf("b is smaller");
            break;
        }
        
    }
    
    return 0;
}