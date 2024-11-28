#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for(int i = 1; i <= testCase; i++)
    {
        int N;
        scanf("%d", &N);
        int arrayNumber[N][N];

        for(int j = 0; j < N; j++)
        {
            for(int k = 0; k < N; k++)
            {
                scanf("%d", &arrayNumber[j][k]);
            }            
        }

        printf("Case #%d:", i);
        for(int k = 0; k < N; k++)
        {
            int value = 0;
            for(int j = 0; j < N; j++)
            {
                value += arrayNumber[j][k];
            }
            printf(" ");
            printf("%d", value);
        }
        printf("\n");
    }

    return 0;
}