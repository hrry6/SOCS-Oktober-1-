#include <stdio.h>

void inputMatrix(int matrix[50][50], int N)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }            
    }
}

void kaliMatrix(int A[50][50], int B[50][50], int AB[50][50], int N)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            AB[i][j] = 0;
            for(int k = 0; k < N; k++)
            {
                AB[i][j] += A[i][k] * B[k][j]; 
            }   
        }   
    }
}

int main()
{
    int jumlahPerulangan;
    scanf("%d", &jumlahPerulangan);

    for(int i = 1; i <= jumlahPerulangan; i++)
    {
        int N;
        scanf("%d", &N);

        int A[50][50], B[50][N], C[50][50], AB[50][50], ABC[50][50];

        inputMatrix(A, N);
        inputMatrix(B, N);
        inputMatrix(C, N);

        kaliMatrix(A, B, AB, N);
        kaliMatrix(AB, C, ABC, N);

        printf("Case #%d:\n", i);

        for(int j = 0; j < N; j++)
        {
            for(int k = 0; k < N; k++)
            {
                if(k > 0) printf(" ");
                printf("%d", ABC[j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}