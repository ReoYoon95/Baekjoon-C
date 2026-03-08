#include<stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%0.12lf\n", (double)A / B);
    return 0;
}