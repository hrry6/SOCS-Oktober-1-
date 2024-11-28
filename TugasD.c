#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int kebun[x][y];

    for(int i = 0; i < x ;i++)
    {
        for(int j = 0; j < y ;j++)
        {
            scanf("%d", &kebun[i][j]);
        }        
    }

    int perubahan;
    scanf("%d", &perubahan);

    for(int i = 0; i < perubahan; i++)
    {
        int a ,b ,c;
        scanf("%d %d %d", &a, &b, &c);
        kebun[--a][--b] = c;
    }

    for(int i = 0; i < x ;i++)
    {
        for(int j = 0; j < y ;j++)
        {
            if(j != 0) printf(" ");
            printf("%d", kebun[i][j]);
        }        
        printf("\n");
    }

    return 0;
}
