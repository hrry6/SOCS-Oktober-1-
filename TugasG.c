#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);

    for (int i = 1; i <= testcase; i++) 
    {
        int N;
        scanf("%d",&N);
        int arrayAngka[2][N];

        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < N; k++)
            {
                scanf("%d", &arrayAngka[j][k]);
            }
        }

        int count = 0;

        for(int j = 0; j < N; j++)
        {
            if(arrayAngka[0][j] < arrayAngka[1][j]) count++;
        }

        printf("Case #%d: %d\n", i, count);

    }

    return 0;
}
