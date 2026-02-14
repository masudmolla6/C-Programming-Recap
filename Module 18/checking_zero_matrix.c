#include <stdio.h>
#include <stdbool.h>
int main() {
    int r,c;
    scanf("%d %d", &r,&c);
    int a[r][c];
    bool flag=true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // checking zero matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]!=0)
            {
                flag=false;
            }
            
        }
        // printf("\n");
    }

    if (flag==true)
    {
        printf("This is a Zero Matrix");
    }
    else{
        printf("This is not a zero Matrix");
    }
    
    
    return 0;
}