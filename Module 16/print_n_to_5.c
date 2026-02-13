#include <stdio.h>
void fun(int num){
    if (num==6)
    {
        return;
    }
    printf("%d\n", num);
    fun(num+1);
}
int main() {
    int num=1;
    fun(num);
    return 0;
}