#include <stdio.h>

int main()
{
    int jumlahTayangan;
    scanf("%d", &jumlahTayangan);
    int arrayTayangan[jumlahTayangan];

    for(int i = 0; i < jumlahTayangan; i++)
    {
        scanf("%d", &arrayTayangan[i]);
    }

    int jumlahTeman;
    scanf("%d", &jumlahTeman);

    for(int i = 0; i < jumlahTeman; i++)
    {
        int A, B, value = 0;
        scanf("%d %d", &A, &B);

        for(int j = (A - 1); j <= (B - 1); j++)
        {
            value += arrayTayangan[j];
        }

        printf("Case #%d: %d\n", i + 1, value);

    }
    return 0;
}