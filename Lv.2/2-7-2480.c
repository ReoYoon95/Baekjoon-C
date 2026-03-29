#include <stdio.h>
#include <time.h>

int main(void)
{
    // srand((unsigned)time(NULL));
    // int A  = rand() % 6 + 1;
    // int B  = rand() % 6 + 1;
    // int C  = rand() % 6 + 1;

    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A == B && B == C)
    {
        printf("%d", 10000 + A * 1000);
    }
    else if (A == B || A == C || B == C)
    {
        printf("%d", 1000 + ((A == B || A == C) ? A : C) * 100);
    }
    else
    {
        int max = (A > B && A > C) ? A : (B > C) ? B
                                                 : C;
        printf("%d", max * 100);
    }

    return 0;
}