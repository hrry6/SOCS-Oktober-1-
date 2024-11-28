#include <stdio.h>

int main() 
{
    int testcase;
    scanf("%d", &testcase);

    for(int i = 1; i <= testcase; i++) 
    {
        int N;
        scanf("%d", &N);

        long long int array[N][N];

        for(int j = 0; j < N; j++)
        {
            for(int k = 0; k < N; k++)
            {
                scanf("%lld", &array[j][k]);
            }            
        }

        printf("Case #%d:", i);

        for(int j = 0; j < N; j++)
        {
            long long int value = 0;
            for(int k = 0; k < N; k++)
            {
                value += array[k][j];
            }       
            printf(" ");     
            printf("%lld", value);
        }

        printf("\n");

    }

    return 0;
}
