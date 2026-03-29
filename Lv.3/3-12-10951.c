// 문제
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 입력
// 입력은 여러 개의 테스트 케이스로 이루어져 있다.

// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

// 출력
// 각 테스트 케이스마다 A+B를 출력한다.

#include <stdio.h>

int main(void)
{

    int A, B;
    while (1) // while (scanf("%d %d", &A, &B) != EOF) 이렇게 바로 써도 됌. EOF는 End Of File의 약자로, 입력이 더 이상 없을 때 scanf가 반환하는 값입니다. EOF는 일반적으로 -1로 정의되어 있습니다. 따라서, while (scanf("%d %d", &A, &B) != EOF) 구문은 입력이 끝날 때까지 계속해서 A와 B를 읽어들이는 루프를 만듭니다.
    {
        if (scanf("%d %d", &A, &B) != 2)
            return 0;

        printf("%d\n", A + B);
    }
    return 0;
}