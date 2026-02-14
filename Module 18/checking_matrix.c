#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d", &r,&c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // check row?
    // if (r==1)
    // {
    //     printf("Row Matrix");
    // }
    // else{
    //     printf("This is not a row matrix");
    // }

    // check col?
    // if (c==1)
    // {
    //     printf("Col Matrix");
    // }
    // else{
    //     printf("This is not a Col matrix");
    // }

    // check row?
    if (r==c)
    {
        printf("Scare Matrix");
    }
    else{
        printf("This is not a Scare matrix");
    }
    

    return 0;
}