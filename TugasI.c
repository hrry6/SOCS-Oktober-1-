#include <stdio.h>

int main()
{
    int testcase;
    scanf("%d", &testcase);

    for(int i = 1; i <= testcase; i++)
    {
        int N;
        scanf("%d", &N);
        int arrayAngka[N];

        for(int j = 0; j < N; j++)
        {
            scanf("%d", &arrayAngka[j]);
        }

        printf("Case #%d:", i);

        for(int k = (N - 1); k >= 0; k--)
        {
            printf(" %d", arrayAngka[k]);
        }
        printf("\n");
    }

    return 0;
}