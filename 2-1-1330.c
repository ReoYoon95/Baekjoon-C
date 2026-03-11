#include <stdio.h>

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);

    if (A > B)
    {
        printf(">");
    } // if
    else if (A < B)
    {
        printf("<");
    } // else if
    else
    {
        printf("==");
    } // else

    return 0;
} // main