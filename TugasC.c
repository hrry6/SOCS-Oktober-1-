#include <stdio.h>

int main()
{
    int arrayLenghth;
    scanf("%d", &arrayLenghth);
    
    int array[arrayLenghth];

    for(int i = 0; i < arrayLenghth; i++)
    {
        scanf("%d", &array[i]);
    }

    int testCase;
    scanf("%d", &testCase);

    for(int i = 0; i < testCase; i++)
    {
        int A, B;
        scanf("%d %d", &A, &B);

        printf("Case #%d:", i + 1);

        array[(A - 1)] = B;
        for(int j = 0; j < arrayLenghth; j++)
        {
            printf(" %d", array[j]);
        }
        printf("\n");
    }

    return 0;
}