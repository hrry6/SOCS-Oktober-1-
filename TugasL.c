#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int twistArray[N], userArray[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &twistArray[i]);
    }

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &userArray[i]);
    }

    for(int i = 0; i < N; i++)
    {
        int index = 0;
        for(int j = 0; j < N; j++)
        {
            if (twistArray[j] == i) index = j;
        }
        if(i == 0) printf(" ");
        printf("%d", userArray[index]);
    }
    
    printf("\n");

    return 0;
}