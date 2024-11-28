#include <stdio.h>
#include <stdlib.h>

#define MAX_N 5000

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    scanf("%d", &N);
    int arrayKamar[MAX_N];    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arrayKamar[i]);
    }
    qsort(arrayKamar, N, sizeof(int), compare);
    int jumlahTamuSenang = 0;
    for (int i = 0; i < N; i++) {
        if (i == 0 || arrayKamar[i] != arrayKamar[i - 1]) {
            jumlahTamuSenang++;
        }
    }
    printf("%d\n", jumlahTamuSenang);
    return 0;
}
