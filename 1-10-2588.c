#include<stdio.h>

int main(void) {
    int A,B;
    printf("Insert 1st Number : \t");
    scanf("%d", &A);
    printf("Insert 2nd Number : \t");
    scanf("%d", &B);

    printf("%7d\n%7d\n", A, B);
    //A&B 첫번째 둘째줄에 넣는 작업.
    printf("---------------------------\n");
    printf("%7d\n", A * (B % 10));
    printf("%6d\n", A * (B / 10 % 10));
    printf("%5d\n", A * (B / 100));
    printf("---------------------------\n");
    printf("%7d\n", A * B);

    return 0;

}