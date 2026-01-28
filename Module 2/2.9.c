#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("Burger khabo");
    }
    else if (tk >= 50)
    {
        printf("Fusk Khabo");
    }
    else
    {
        printf("kiso Khabo na");
    }

    return 0;
}