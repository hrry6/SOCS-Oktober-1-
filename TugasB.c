#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for(int i = 1; i <= testCase; i++)
    {
        int N;
        scanf("%d", &N);
        int A[N], B[N];
        
        for(int j = 0; j < N; j++)
        {
            scanf("%d", &A[j]);
        }

        for(int j = 0; j < N; j++)
        {
            scanf("%d", &B[j]);
        }

        printf("Case #%d:", i);

        for(int j = 0; j < N; j++)
        {
            printf(" %d", (A[j] - B[j]));
        }

        printf("\n");

    }

    return 0;
}