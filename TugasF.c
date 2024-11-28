#include <stdio.h>
#include <string.h>

int main() {
    int testcase;
    scanf("%d", &testcase);

    for (int i = 1; i <= testcase; i++) 
    {
        char kata[100000];
        scanf("%s", kata);
        
        int count = 0;
        int alphabetArray[26] = {0};

        for (int j = 0; j < strlen(kata); j++) 
        { 
            int index = kata[j] - 'a';
            if (index >= 0 && index < 26 && alphabetArray[index] == 0) count++;
            alphabetArray[index]++;
        }
        printf("Case #%d: %s\n", i, (count % 2 == 1) ? "Ewwww" : "Yay");
    }

    return 0;
}
