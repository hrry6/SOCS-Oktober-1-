#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for(int i = 1; i <= testCase; i++)
    {
        char stringKata[1000];
        scanf("%s", stringKata);
        getchar();
        
        printf("Case %d: ", i);


        for(int j = 0; j < strlen(stringKata); j++)
        {
            if(j != 0) printf("-");
            printf("%d", stringKata[j]);
        }

        printf("\n");
    }

    return 0;
}