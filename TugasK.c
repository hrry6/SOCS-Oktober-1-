#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for(int i = 1; i <= testCase; i++)
    {
        char userString[1000];
        scanf("%s", userString);
        getchar();

        printf("Case #%d : ",i);
 
        for(int j = strlen(userString) - 1; j >=0 ; j--)
        {
            printf("%c", userString[j]);
        }

        printf("\n");
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int testCase;
//     scanf("%d", &testCase);

//     for(int i = 1; i <= testCase; i++)
//     {
//         char userString[1000];
//         scanf("%s", userString);
//         getchar();
//         char stringReverse[strlen(userString) + 1];

//         for(int j = 0; j < strlen(userString); j++)
//         {
//             stringReverse[j] = userString[(strlen(userString) - 1 - j)];
//         }
//         stringReverse[strlen(userString)] = '\0';


//         printf("Case #%d : %s\n",i, stringReverse);
//     }

//     return 0;
// }