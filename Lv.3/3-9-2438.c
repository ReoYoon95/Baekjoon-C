// 문제
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

// 입력
// 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

// 출력
// 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.


#include <stdio.h>

int main(void) 
{
    int C;
    if (scanf("%d", &C) != 1) return 0;

    for (int i = 1; i <= C; i++) //층을 나타냄.
    {
        for (int j = 1; j <= i; j++) //별 갯수 나타냄.
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}