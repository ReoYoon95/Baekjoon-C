#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int H, M;
    scanf("%d %d", &H, &M);
    if (M < 45)
    // 45분보다 작은경우 1시간을 60분으로 치환후 45분을 빼면 +15분이 남음. 15분을 더하고 1시간을 빼는 코드.
    {
        M += 15;
        H--;
        if (H < 0)
        // 0시에서 1시간을 빼면 -1이 되기에 23시로 치환.
        {
            H = 23;
        }
    }
    else
    {
        M -= 45;
    }
    printf("%d %d", H, M);
    return 0;
}