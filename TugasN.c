#include <stdio.h>

int main() 
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 1; i <= testCase; i++) 
    {
        int N;
        scanf("%d", &N);
        long long int arrayNumber[N];


        for (int j = 0; j < N; j++) 
        {
            scanf("%lld", &arrayNumber[j]);
        }

        long long int max1 = -1000000001; 
        long long int max2 = -1000000001; 

        for (int j = 0; j < N; j++) 
        {
            if (arrayNumber[j] >= max1) 
            {
                max2 = max1; 
                max1 = arrayNumber[j]; 
            } else if (arrayNumber[j] > max2 && arrayNumber[j] < max1) 
            {
                max2 = arrayNumber[j]; 
            }
        }

        long long int result = max1 + (max2 == -1000000001 ? 0 : max2);

        printf("Case #%d: %lld\n", i, result); 
    }

    return 0;
}
