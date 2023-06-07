#include "stdio.h"
#include "string.h"
int main()
{
    float first[2][2];
    float second[2][2];
    float sum[2][2];
    int r1, c1, r2, c2, r3, c3;

    printf("enter first arrary:\n");
    fflush(stdout);
    for (r1 = 0; r1 < 3; r1++)
    {
        for (c1 = 0; c1 < 3; c1++)
        {
            scanf("%f", first[r1][c1]);
        }
    }

    printf("enter second arrary:\n");
    for (r2 = 0; r2 < 3; r2++)
    {
        for (c2 = 0; c2 < 3; c2++)
        {
            scanf("%f", second[r2][c2]);
        }
    }

    for (r3 = 0; r3 < 3; r3++)
    {
        for (c3 = 0; c3 < 3; c3++)
        {
            sum[r3][c3] = first[r3][c3] + second[r3][c3];
        }
    }

    return 0;
}
