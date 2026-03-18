#include <stdio.h>

int main(void)
{
    int X = 0;
    int N = 0;
    int a = 0;
    int b = 0;
    scanf("%d", &X);
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &a, &b);
        X -= a * b;
    }

    if (X == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
